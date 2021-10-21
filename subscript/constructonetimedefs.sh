#!/bin/sh

outputfileButtons="_buttonmods.def"
outputfileLayers="_layers.def"
outputfileLayersTmpName="_layers.def.name"
outputfileLayersTmpKeys="_layers.def.keys"
totallinesLayers=$(wc -l _naming | awk '{print $1}')
#totallinesLayers=$(wc -l _buttonmods | awk '{print $1}')


echo "#define LAYERS $totallinesLayers" > $outputfileLayersTmpName
echo "static char* layer_names[LAYERS] = {" >> $outputfileLayersTmpName
echo "static Key* available_layers[LAYERS] = {" > $outputfileLayersTmpKeys

for defline in $(cat _naming)
do
	valuename=$(printf "%s\n" "${defline}" | awk '{print $1}' FS=';')
	valuekeys=$(printf "%s\n" "${defline}" | awk '{print $2}' FS=';')
	printf "%s\n" "       \"${valuename}\"," >> $outputfileLayersTmpName
	printf "%s\n" "        ${valuekeys}," >> $outputfileLayersTmpKeys
done

echo "};" >> $outputfileLayersTmpName
echo "};" >> $outputfileLayersTmpKeys
echo "" >> $outputfileLayersTmpName
echo "" >> $outputfileLayersTmpKeys

cat $outputfileLayersTmpName $outputfileLayersTmpKeys > $outputfileLayers
rm "$outputfileLayersTmpName"
rm "$outputfileLayersTmpKeys"

echo "Buttonmod buttonmods[] = {" > $outputfileButtons
for defline in $(cat _buttonmods)
do
	key=$(printf "%s\n" "${defline}"| awk '{print $1}' FS=';')
	value=$(printf "%s\n" "${defline}" | awk '{print $2}' FS=';')
	printf "%s\n" "        { $key, $value }," >> $outputfileButtons
done

echo "};" >> $outputfileButtons
