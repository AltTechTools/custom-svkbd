#!/bin/sh
newname="$1"

echo "Creating new Folder $newname .."
mkdir "$newname" || return 1
cd "$newname" || return 1
mkdir "_overlay"
touch "_naming"
touch "_buttonmods"

##### example
echo "Creating excample setup $newname .."
mkdir "key_exmpl"
cd "key_exmpl"
echo "\"Exmpl Title\";\"ExmplAltTtl\";XK_ExmplKey;Scaling" > exmpl_oneLine
echo "\"Exmpl Title2\";0;XK_ExmplKey;1.5" >> exmpl_oneLine
cd ..

cd "_overlay"
echo "exmplText;exmplKeyCode" > exmplKeyCode
cd ..

echo "ExmplName;DefinitionFolderName"  > _naming
echo "XK_ExmplModKey;ExmplMouseButton" > _buttonmods

cd ..
echo "Created newexcample Setup in Folder: \"$newname\""
echo "To combine the layout into one layout Class File .."
echo "--> run \"./genlayout_definitionClass.sh $newname\" .."
echo "--> in this Folder $PWD"
