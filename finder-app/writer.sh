#! /bin/bash

if [ "$#" -ne 2 ]; then
    exit 1  # Salir con código de error
fi

writefile=$1
writestr=$2


filedir=$(dirname "$writefile")

if [ ! -d "$filedir" ]; then
    mkdir -p "$filedir"
fi

touch $writefile

echo "$writestr" > $writefile

