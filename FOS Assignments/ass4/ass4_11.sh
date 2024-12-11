#. Write a shell script that uncompresses the multiple files in new folder ,keeping the original files 
#at their place.

touch file3.txt file4.txt

mkdir -p uncompressed

gunzip file3.txt file4.txt
mv file3.txt.gz uncompressed
mv file4.txt.gz uncompressed