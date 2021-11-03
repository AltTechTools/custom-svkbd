#!/bin/sh
folder="$1" #"keys_en"
[ "$folder" = "" ] && echo "No Layout Name passed" && exit 0
cd "$folder" || exit 1

delimiter=$(./../getdelimiter.sh)
outputfile="../${folder}.def"
outputdef=$(echo $folder | tr '[:lower:]' '[:upper:]')
totallines=$(../gettotaldeflen.sh) #//+amount of files
totallines=$(expr "$totallines" + "$(ls| wc -l)")
totallines=$(expr "$totallines" + "1")
#touch $outputfile
#echo "$totallines"
#return 0
#echo "#define $outputdef $totallines" > $outputfile
#echo "static Key $folder[$outputdef] = {" >> $outputfile 
#not necessary this way
#echo "static Key $folder[$totallines] = {" > $outputfile

#acctually prob necessary -> all arays need to be the same lenght
#e.v. eval the longest when packing everything toggether
#also the definitions might always have to have a 2nd row ender on the last element
#echo "#define KEYS $totallines" > $outputfile

latestlongest="0"
test -e ../key_defs.len && latestlongest=$(cat ../key_defs.len)
[ "$totallines" -gt "$latestlongest" ] && echo "$totallines" > ../key_defs.len
#echo "$totallines"

echo "" > $outputfile 
echo "static Key $folder[KEYS] = {" >> $outputfile 

b_first=""
for filename in $(ls)
do

	#[ "$b_first" = "" ] || { echo ""; echo  "        { 0 }, /* New row */"; echo ""; } >> $outputfile
	#b_first="x"

        while read -r line
        do
                #title=$(echo "${line}" | awk '{print $1}' FS=";")
                #otherchars=$(echo "${line}" | awk '{print $2}' FS=";")
                #key=$(echo "${line}" | awk '{print $3}' FS=";")
                #sizeing=$(echo "${line}" | awk '{print $4}' FS=";")

		title=$(printf "%s" "${line}" | awk '{print $1}' FS="${delimiter}")  #";")
                otherchars=$(printf "%s" "${line}" | awk '{print $2}' FS="${delimiter}")   #";")
                key=$(printf "%s" "${line}" | awk '{print $3}' FS="${delimiter}") #";")
                sizeing=$(printf "%s" "${line}" | awk '{print $4}' FS="${delimiter}")  #";")

                #echo "        { ${title}, ${otherchars}, ${key}, ${sizeing} }, " >>  $outputfile
                printf "%s\n" "        { ${title}, ${otherchars}, ${key}, ${sizeing} }, " >>  $outputfile
#                printf "%s\n" "        { ${title}, ${otherchars}, ${key}, ${sizeing} }, "
		#exit 0
#		{ echo ""; echo  "        { 0 }, /* New row */"; echo ""; } >> $outputfile

        done < "$filename"
	{ echo ""; echo  "        { 0 }, /* New row */"; echo ""; } >> $outputfile
done
{ echo ""; echo  "        { 0 }, /* ending row */"; echo ""; } >> $outputfile
echo "};" >>  $outputfile

