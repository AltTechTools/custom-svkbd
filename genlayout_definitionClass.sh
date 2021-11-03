#!/bin/sh
folder=$(echo "$1"| sed 's/\///')

if [ "$1" = "" ]; then
  test -e /usr/bin/dmenu || echo "es muss ein Ordner als Parameter mitgegeben werden!" || exit 0
  folder=$(ls -F | grep "/$" | grep -v "subscript/" | dmenu -p "Select Layout Folder: " | sed 's/\///')
  [ "$folder" = "" ] && echo "nichts gewählt" && exit 0
fi

outputfile="../layout.$folder.h"

cd "$folder"

for subscript in $(ls ../subscript/)
do
	ln -s -f "../subscript/$subscript" "$subscript"
done

./construct_defs.sh
echo "#define KEYS $(cat key_defs.len)" > $outputfile

for subdef in $(./printkeys.sh)
do
	echo "Copy $subdef"
	cat "$subdef.def" >> $outputfile
done

echo "Copy one-time Definitions"
cat "_overlay.def" >> $outputfile
cat "_layers.def" >> $outputfile
cat "_buttonmods.def" >> $outputfile
