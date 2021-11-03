#!/bin/sh
folder="$1" #"keys_en"
[ "$folder" = "" ] && echo "No Layout Name passed" && exit 0
#cd "$folder" || exit 1

delimiter="{;}"
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
		echo "Layer naming definition..."
		layersnametexts=""
		islayersname=1
		isoverlay=0
		iskey=0
		islayerkey=0
		isbuttonmod=0
	fi

	if [ "$line" = "static Key* available_layers[LAYERS] = {" ]; then
		echo "Layer variable definition..."
		islayerkey=1
		islayersname=0
		isoverlay=0
		iskey=0
		isbuttonmod=0

		layerlineno=0
	fi
	if [ "$line" = "Buttonmod buttonmods[] = {" ]; then
		echo "Buttonmod definition..."
		isbuttonmod=1
		islayerkey=0
		islayersname=0
		isoverlay=0
		iskey=0
	fi

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
			echo "$thislayer$delimiter$thiskey" >> "$mainpath/_naming"
		else
			[ -e "$mainpath/_naming" ] && rm "$mainpath/_naming"
		fi
	fi
	if [ $isbuttonmod -eq 1 ]; then
		if [ "$line" != "Buttonmod buttonmods[] = {" ]; then
			cleanedline=$(echo "$line" | sed 's/ //g' | sed 's/{//' | sed 's/}//')
			key=$(echo "${cleanedline}" | awk '{print $1}' FS=',')
			button=$(echo "${cleanedline}" | awk '{print $2}' FS=',')
			echo "$key$delimiter$button" >> "$mainpath/_buttonmods"
		else
			[ -e "$mainpath/_buttonmods" ] && rm "$mainpath/_buttonmods"
		fi
	fi
	if [ $overlayline -eq 1 ]; then
		isoverlay=1
		iskey=0
		outputname="_overlay"
		path="$mainpath/$outputname"
		[ -d "$path" ] || mkdir -p "$path"
	fi
	if [ $keyline -eq 1 ]; then
		iskey=1
		isoverlay=0
		outputname=$(echo "$line" | awk '{print $1}' FS="[" | sed 's/static Key //')
		path="$mainpath/$outputname"
		[ -d "$path" ] || mkdir -p "$path"
	fi
	if [ $iskey -eq 1 ]; then
		if [ $keyline -lt 1 ]; then
			cleanedline=$(printf "%s" "$line" | sed 's/{//g'   | sed 's/}//g')
                        primsymb=$(printf "%s" "${cleanedline}"|awk '{print $1}' FS=", " | sed 's/ //g')
                        altsymb=$(printf "%s" "${cleanedline}"|awk '{print $2}' FS=", " | sed 's/ //g')
                        keysym=$(printf "%s" "${cleanedline}"|awk '{print $3}' FS=", " | sed 's/ //g')
                        keyscaling=$(printf "%s" "${cleanedline}"|awk '{print $4}' FS=", " | sed 's/ //g' | sed 's/,//g')
			if [ "$keylinename" = "" ]; then
				keylineno=$(expr $keylineno + 1)
				keylinename="ln_$keylineno"
				[ -e  "$path/$keylinename" ] && rm "$path/$keylinename"
				echo "Key Definition $path/$keylinename..."
			fi
			endcount=$(echo "$line" | grep -c "\{ 0 \},")
			if [ $endcount -gt 0 ]; then
				keylinename=""
                        else
				printf "%s\n" "${primsymb}${delimiter}${altsymb}${delimiter}${keysym}${delimiter}${keyscaling}" >> "$path/$keylinename"
                        fi

		fi
	fi
	if [ $isoverlay -eq 1 ]; then
		if [ $overlayline -lt 1 ]; then
			cleanedline=$(printf "%s" "${line}" | sed 's/{//g'   | sed 's/}//g')
			primsymb=$(printf "%s" "${cleanedline}"|awk '{print $1}' FS=", " | sed 's/ //g'| sed 's/"//g')
			altsymb=$(printf "%s" "${cleanedline}"|awk '{print $2}' FS=", " | sed 's/ //g')
			keysym=$(printf "%s" "${cleanedline}"|awk '{print $3}' FS=", " | sed 's/ //g' | sed 's/,//g')
			if [ "$overlayonkey" = "" ]; then
				overlayonkey="$keysym"
				echo "Overlay for $keysym..."
				[ -e  "$path/$overlayonkey" ] && rm "$path/$overlayonkey"
			else
				if [ "$keysym" = "XK_Cancel" ]; then
					overlayonkey=""
				else
					printf "%s\n" "${primsymb}${delimiter}${altsymb}${delimiter}${keysym}" >> "$path/$overlayonkey"
				fi
			fi
		fi
	fi
fi
done < "$inputfile"
echo "Done. see $folder"
