#!/bin/sh
cd _overlay

outputfile="../_overlay.def"
totallines=$(../gettotaldeflen.sh)
filecnt=$(ls | wc -l)
filecnt="$(expr ${filecnt} \* '2')"
totallines=$(expr "$totallines" + "$filecnt")
echo "$totallines"

echo "" >  $outputfile
echo "#define OVERLAYS $totallines" >> $outputfile
echo "static Key overlay[OVERLAYS] = {" >>  $outputfile

for filename in $(ls)
do
	#echo "test: $filename"
	echo "        { 0, 0, $filename }, /* New Definition */" >>  $outputfile
	#read..
	while read -r line
	do
		title=$(printf "%s" "${line}" | awk '{print $1}' FS=";")
		key=$(printf "%s" "${line}" | awk '{print $2}' FS=";")
		printf "%s\n" "        { $title, 0, $key }, " >>  $outputfile
	done < "$filename"
	echo "        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */" >>  $outputfile
done
echo "};" >>  $outputfile
echo "" >>  $outputfile
#echo "$totallines"

