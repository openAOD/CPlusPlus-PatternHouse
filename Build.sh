#!/bin/bash

for directory in */ ; do
    cd "$directory"
    for file in *.cpp ; do
      echo "g++ $file"
      g++ -w $file > /dev/null
    done
    cd ..
done
