#!/bin/bash

app=${1}

echo --------------------------
echo make ${app} 
echo --------------------------
echo 
make ${app}
errval=$?
echo 

if [ $errval = 0 ]
then
    echo --------------------------
    echo ./bin/${app:-test}
    echo --------------------------
    echo 
    ./bin/${app:-test}
    echo 

fi 
