#/bin/sh
#echo "$(ls keys*)"

for filename in $(ls -d keys*)
do
	echo "tst: $(echo $filename | sed 's/://')"
done
