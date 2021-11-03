#!/bin/sh
cd _overlay

outputfile="../_overlay.def"
delimiter=$(./../getdelimiter.sh)
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

echo "construct overlay"
totallines=$(../gettotaldeflen.sh)
#echo "flcnt"
filecnt=$(ls | wc -l)
filecnt="$(expr ${filecnt} \* '2')"
totallines=$(expr "$totallines" + "$filecnt")
#echo "trace"

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
		title=$(printf "%s" "${line}" | awk '{print $1}' FS="${delimiter}")
		altttl=$(printf "%s" "${line}" | awk '{print $2}' FS="${delimiter}")
		key=$(printf "%s" "${line}" | awk '{print $3}' FS="${delimiter}")
		printf "%s\n" "        { \"${title}\", ${altttl}, ${key} }, " >>  $outputfile
	done < "$filename"
	echo "        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */" >>  $outputfile
done
echo "};" >>  $outputfile
echo "" >>  $outputfile
#echo "$totallines"

