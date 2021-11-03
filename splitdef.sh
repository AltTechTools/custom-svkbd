#!/bin/sh
folder="$1" #"keys_en"
[ "$folder" = "" ] && echo "No Layout Name passed" && exit 0
#cd "$folder" || exit 1

inputfile="layout.$folder.h"
mainpath="./$folder"
path="$mainpath"
isoverlay=0
overlayonkey=""
iskey=0
keylinename=""
keylineno=0
islayersname=0
islayerkey=0
isbuttonmod=0
layerlineno=0
[ -d "$folder" ] || mkdir "$folder"
while read -r line
do
if [ "$line" = "" ]; then
 echo "empty skipped" > /dev/null
else
#	title=$(printf "%s" "${line}" | awk '{print $1}' FS=";")
#        otherchars=$(printf "%s" "${line}" | awk '{print $2}' FS=";")
#        key=$(printf "%s" "${line}" | awk '{print $3}' FS=";")
#        sizeing=$(printf "%s" "${line}" | awk '{print $4}' FS=";")
#	printf "%s\n" "        { ${title}, ${otherchars}, ${key}, ${sizeing} }, " >>  $outputfile
	keyline=$(echo "$line" | grep -c "^static Key keys_")
	overlayline=$(echo "$line" | grep -c "^static Key overlay")
	if [ "$line" = "};" ]; then
		isoverlay=0
		iskey=0
		keylinename=""
		keylineno=0
		isbuttonmod=0
		islayerkey=0
		islayersname=0
	fi
	if [ "$line" = "static char* layer_names[LAYERS] = {" ]; then
		layersnametexts=""
		islayersname=1
		isoverlay=0
		iskey=0
		islayerkey=0
		isbuttonmod=0
	fi

	if [ "$line" = "static Key* available_layers[LAYERS] = {" ]; then
		islayerkey=1
		islayersname=0
		isoverlay=0
		iskey=0
		isbuttonmod=0

		layerlineno=0
		#echo "prev found names:"
		#echo "$layersnametexts"
		#echo "and now keys:"

	fi
	if [ "$line" = "Buttonmod buttonmods[] = {" ]; then
		isbuttonmod=1
		islayerkey=0
		islayersname=0
		isoverlay=0
		iskey=0
	fi

# these 2 eventually need to be connected
	if [ $islayersname -eq 1 ]; then
		if [ "$line" != "static char* layer_names[LAYERS] = {" ]; then
			thislayer=$(echo "$line" | awk '{print $2}' FS='"')
			if [ "$layersnametexts" = "" ]; then
				layersnametexts=$(echo "$thislayer")
			else
				layersnametexts=$({ echo "$layersnametexts"; echo "$thislayer"; })
			fi
		fi
	fi
	if [ $islayerkey -eq 1 ]; then
		if [ "$line" != "static Key* available_layers[LAYERS] = {" ]; then
			layerlineno=$(expr $layerlineno + 1)
			thiskey=$(echo "$line" | awk '{print $1}' FS=',')
			thislayer=$(echo "$layersnametexts" | awk "NR==$layerlineno{print \$0}")
			echo "$thislayer;$thiskey" >> "$mainpath/_naming"
		else
			[ -e "$mainpath/_naming" ] && rm "$mainpath/_naming"
		fi
	fi
#this only onece
	if [ $isbuttonmod -eq 1 ]; then
		if [ "$line" != "Buttonmod buttonmods[] = {" ]; then
			echo "$line" | sed 's/ //g' | sed 's/{//' | sed 's/}//'
		else
			[ -e "$mainpath/_buttonmods"]
		fi
	fi

	if [ $overlayline -eq 1 ]; then
		isoverlay=1
		iskey=0
#		outputname=$(echo "$line")
		outputname="_overlay"
#		echo "$outputname"
		path="$mainpath/$outputname"
		[ -d "$path" ] || mkdir -p "$path"
	fi
	if [ $keyline -eq 1 ]; then
		# && echo "$line"
		iskey=1
		isoverlay=0
		outputname=$(echo "$line" | awk '{print $1}' FS="[" | sed 's/static Key //')
#		echo "$outputname"
		path="$mainpath/$outputname"
		[ -d "$path" ] || mkdir -p "$path"
	fi


#        { "1", "!", XK_1, 1 },
#        { 0 }, /* New row */


	if [ $iskey -eq 1 ]; then
		if [ $keyline -lt 1 ]; then
			cleanedline=$(echo "$line" | sed 's/ //g'   | sed 's/{//g'   | sed 's/}//g')
                        primsymb=$(echo "${cleanedline}"|awk '{print $1}' FS=",")
                        altsymb=$(echo "${cleanedline}"|awk '{print $2}' FS=",")
                        keysym=$(echo "${cleanedline}"|awk '{print $3}' FS=",")
                        keyscaling=$(echo "${cleanedline}"|awk '{print $4}' FS=",")
			#keylinename=""
			#keylineno=0
#prob faulty, only overlay leaves out the first char 
			if [ "$keylinename" = "" ]; then
				keylineno=$(expr $keylineno + 1)
				keylinename="ln_$keylineno"
#				echo "$keylinename"
				[ -e  "$path/$keylinename" ] && rm "$path/$keylinename"
			fi
#			else
				endcount=$(echo "$line" | grep -c "\{ 0 \},")
				if [ $endcount -gt 0 ]; then
					#keylinename=""
					#keylineno=$keylineno+1
					keylinename=""
                                else
					#echo "$primsymb;$altsymb;$keysym;$keyscaling"
#					echo "$primsymb;$altsymb;$keysym;$keyscaling"
                            		echo "$primsymb;$altsymb;$keysym;$keyscaling" >> "$path/$keylinename"
                                fi
#			fi

		fi
	fi

	if [ $isoverlay -eq 1 ]; then
		if [ $overlayline -lt 1 ]; then
			#echo "some overlayline $line"
			cleanedline=$(echo "$line" | sed 's/ //g'   | sed 's/{//g'   | sed 's/}//g')
			primsymb=$(echo "${cleanedline}"|awk '{print $1}' FS=",")
			altsymb=$(echo "${cleanedline}"|awk '{print $2}' FS=",")
			keysym=$(echo "${cleanedline}"|awk '{print $3}' FS=",")
			#echo "$primsymb-$altsymb-$keysym"
			if [ "$overlayonkey" = "" ]; then
				#echo "$keysym"
				overlayonkey="$keysym"
				[ -e  "$path/$overlayonkey" ] && rm "$path/$overlayonkey"
				touch "$path/$overlayonkey"
			else
				if [ "$keysym" = "XK_Cancel" ]; then
					overlayonkey=""
				else
					#echo "$overlayonkey -> $keysym"
					echo "$primsymb;$altsymb;$keysym" >> "$path/$overlayonkey"
				fi
			fi
		fi
### do not go by 0,0 , go by first element aftr xk_cancel		
	fi
fi
done < "$inputfile"
