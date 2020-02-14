#!/bin/bash

app=${1}

echo --------------------------
echo make ${app} 
echo --------------------------
make ${app} 


if [ $? = 0 ]
then
    echo --------------------------
    echo ./bin/${app:-hello_world}
    echo --------------------------
    ./bin/${app:-hello_world}

fi 
