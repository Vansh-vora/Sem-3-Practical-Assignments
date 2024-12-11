# Write a shell script that compresses the multiple files in new folder ,keeping the original files at 
#their place.

touch file3.txt file4.txt

mkdir -p compressed

gzip file3.txt file4.txt
mv file3.txt.gz compressed
mv file4.txt.gz compressed