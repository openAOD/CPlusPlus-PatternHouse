#!/bin/bash

set -e

for directory in */ ; do
    cd "$directory"
    for file in *.cpp ; do
      echo "gcc $file"
      g++ -w $file > /dev/null
    done
    cd ..
done
