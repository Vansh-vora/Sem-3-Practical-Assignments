#Write a shell script that compresses the two file separetely

touch file1.txt
touch file2.txt

echo "Compressing file1:"
gzip file1.txt >file1.gz
echo "Compressing file2:"
gzip file2.txt >file2.gz