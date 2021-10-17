#!/bin/sh
cd _overlay

outputfile="../overlay.def"
totallines=$(../gettotaldeflen.sh)

echo "#define OVERLAYS $totallines" > $outputfile
echo "static Key overlay[OVERLAYS] = {" >>  $outputfile

for filename in $(ls)
do
	#echo "test: $filename"
	echo "        { 0, 0, $filename }, /* New Definition */" >>  $outputfile
	#read..
	while read -r line
	do
		title=$(echo "$line" | awk '{print $1}' FS=";")
		key=$(echo "$line" | awk '{print $2}' FS=";")
		echo "        { $title, 0, $key }, " >>  $outputfile
	done < "$filename"
	echo "        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */" >>  $outputfile
done
echo ");" >>  $outputfile
#echo "$totallines"

