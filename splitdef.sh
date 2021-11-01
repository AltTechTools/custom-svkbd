#!/bin/sh
folder="$1" #"keys_en"
[ "$folder" = "" ] && echo "No Layout Name passed" && exit 0
#cd "$folder" || exit 1

inputfile="layout.$folder.h"
mainpath="."
path="$mainpath"
isoverlay=0
overlayonkey=""
while read -r line
do
#	title=$(printf "%s" "${line}" | awk '{print $1}' FS=";")
#        otherchars=$(printf "%s" "${line}" | awk '{print $2}' FS=";")
#        key=$(printf "%s" "${line}" | awk '{print $3}' FS=";")
#        sizeing=$(printf "%s" "${line}" | awk '{print $4}' FS=";")
#	printf "%s\n" "        { ${title}, ${otherchars}, ${key}, ${sizeing} }, " >>  $outputfile
	keyline=$(echo "$line" | grep -c "^static Key keys_")
	overlayline=$(echo "$line" | grep -c "^static Key overlay")
	if [ $overlayline -eq 1 ]; then
		isoverlay=1
#		outputname=$(echo "$line")
		outputname="_overlay"
		echo "$outputname"
		[ -d "$outputname" ] || mkdir "$outputname"
		path="$mainpath/$outputname"
	fi
	if [ $keyline -eq 1 ]; then
		# && echo "$line"
		isoverlay=0
		outputname=$(echo "$line" | awk '{print $1}' FS="[" | sed 's/static Key //')
		echo "$outputname"
		[ -d "$outputname" ] || mkdir "$outputname"
		#cd "$outputfile"
		path="$mainpath/$outputname"
		#cd ..
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
				echo "$keysym"
				overlayonkey="$keysym"
			fi
			if [ "$keysym" = "XK_Cancel" ]; then
				overlayonkey=""
			fi
		fi
### do not go by 0,0 , go by first element aftr xk_cancel		
	fi
done < "$inputfile"
