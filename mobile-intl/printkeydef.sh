#!/bin/sh
folder="keys_en"
cd "$folder"

outputfile="../${folder}.def"
outputdef=$(echo $folder | tr '[:lower:]' '[:upper:]')
totallines=$(../gettotaldeflen.sh) #//+amount of files
#touch $outputfile

echo "#define $outputdef $totallines" > $outputfile
echo "static Key $folder[$outputdef] = {" >> $outputfile

for filename in $(ls)
do
        while read -r line
        do
                title=$(echo "${line}" | awk '{print $1}' FS=";")
                otherchars=$(echo "${line}" | awk '{print $2}' FS=";")
                key=$(echo "${line}" | awk '{print $3}' FS=";")
                sizeing=$(echo "${line}" | awk '{print $4}' FS=";")
                echo "        { $title, $otherchars, $key, $sizeing }, " >>  $outputfile
		#exit 0
        done < "$filename"

        echo "" >>  $outputfile
	echo "        { 0 }, /* New row */" >> $outputfile #maybe not on last
        echo "" >>  $outputfile
done
echo "};" >>  $outputfile
