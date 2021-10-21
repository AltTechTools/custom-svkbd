#!/bin/sh

echo "generating sub definitions"
for layer in $(./printkeys.sh)
do
 echo "curr: $layer"
 ./constructkeydef.sh "$layer"
done

echo "generating overlay definition"
./constructoverlay.sh

echo "generating layer & button def"
./constructonetimedefs.sh
