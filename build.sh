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
    echo ./bin/${app:-hello_world}
    echo --------------------------
    echo 
    ./bin/${app:-hello_world}
    echo 

fi 
