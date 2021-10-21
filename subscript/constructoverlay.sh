#!/bin/sh
cd _overlay

outputfile="../_overlay.def"

if [ $(ls | wc -c) -lt 1 ]; then
	totallines=1
#	echo "x"

	echo "" >  $outputfile
	echo "#define OVERLAYS $totallines" >> $outputfile
	echo "static Key overlay[OVERLAYS] = {" >>  $outputfile
	echo "{ 0, 0, XK_Cancel }," >>  $outputfile
	echo "};" >>  $outputfile
	echo "" >>  $outputfile
	return 0
fi

echo "totalline"
totallines=$(../gettotaldeflen.sh)
echo "flcnt"
filecnt=$(ls | wc -l)
filecnt="$(expr ${filecnt} \* '2')"
totallines=$(expr "$totallines" + "$filecnt")
echo "trace"

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

