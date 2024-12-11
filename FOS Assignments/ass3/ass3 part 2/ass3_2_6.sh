#6. Write a shell script to accept a file name from user and check that given file is exist or not if
#the file exist then display all the file content in capital letters.

read -p "enter the file name:" f1
if [ ! -f $f1 ]; then
    echo "file does not exist"
    exit
fi

cat $f1 | tr '[:lower:]' '[:upper:]'