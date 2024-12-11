#Write a shell script to accept a file name from user and check that given file is exist or not if
#the file exist then check that given file is in sorted order or not if the file is not in sorted
#order then display file in sorted oreder in descending.

read -p "enter the name of file:" f1
if [ ! -f $f1 ]; then
    echo "file do not exist"
    exit
fi
sort $f1 -t '|' -k 4,4 -r >demo.txt

if cmp -s "$f1" "demo.txt"; then
    echo "file are same" 
else
    echo "file sorted in decending order:"
    cat demo.txt
fi