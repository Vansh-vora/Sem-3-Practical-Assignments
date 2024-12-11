#Write a shell script to accept a file name and check that given file is exist or not.If the file is
#exist then display the file content in following format.

read -p "enter file name:" f1
if [ ! -f $f1 ];
then
    echo "File does not exist"
    exit
fi

echo "Select an Option:"
echo "1. Display content in sorted order" 
echo "2. Display first five lines from the file"
echo "3. Display last five lines from the file" 
echo "4. paste two files sequencially with “|” delimeters"
echo "5.exit"
read -p "Choose a option:[1-5]" choice

case $choice in
1) cat $f1 | sort ;;
2) head -5 $f1 ;;
3) tail -5 $f1 ;;
4) read -p "enter the second file:" f2
    if [ ! -f $f2 ]; then
        echo "file do not exist"
        exit
    fi
    paste $f1 $f2 ;;
5) exit ;;
*) echo "Invalid Choice" ;;
esac 