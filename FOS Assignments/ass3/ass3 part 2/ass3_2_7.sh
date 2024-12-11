# Write a shell script to accept a file name from user and check that given file exist or not, if
#the file exist then display all the file content

read -p "enter the file name:" f1
if [ ! -f $f1 ]; then
    echo "File do not exist"
    exit
fi

cat $f1