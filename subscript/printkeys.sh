#/bin/sh
#echo "$(ls keys*)"

for filename in $(ls -F | grep "keys_[[:alnum:]]*/$") #$(ls -d keys*)
do
	echo "$(echo $filename | sed 's/\///')"
done
