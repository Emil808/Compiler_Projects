#!/bin/bash
for f in *.txt
do
	make compile src=$f flags=ix
done
