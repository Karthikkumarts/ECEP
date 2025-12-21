#! /bin/bash
#program to print pattern
# *
# * *
# * * *
# * * * *
for i in `seq 4` # <----to iterate over the row (no of lines)
do
	for j  in `seq 1 $i` #<----to iterate over column (no of *)
	do
	       	echo -n  " * "
	done
	echo #<---to move cursor to next line, by default echo will print new line
done
