





#/bin/sh
#echo "$(ls keys*)"

for filename in $(ls -F | grep "keys_[[:print:]]*/$") #$(ls -d keys*)
do
	echo "$(echo $filename | sed 's/\///')"
done
