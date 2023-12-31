#! /bin/bash


if [ "$#" -ne 2 ]; then
    exit 1  # Salir con código de error
fi

filesdir=$1
searchstr=$2

if [ ! -d $filesdir  ]; then
   exit 1
fi


X=$(find "$filesdir" -type f | wc -l)
Y=$(grep -r -o -w "$searchstr" "$filesdir" | wc -l)

echo "The number of files are $X and the number of matching lines are $Y"
