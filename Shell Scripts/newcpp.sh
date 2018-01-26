#!/bin/sh

printf 'Please enter the name for the new file. -> '
read FILENAME

touch $FILENAME.cpp
echo '#include <iostream>\nusing namespace std;\n\nint main() {\n\n\t//Your code here\n\treturn 0;\n\n}' > $FILENAME.cpp
