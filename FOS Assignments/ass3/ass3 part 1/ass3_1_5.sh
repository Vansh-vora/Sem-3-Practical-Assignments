#Create a unix.txt. Content of the file is given below.
#unix is great os. unix is opensource. unix is free os.
#learn operating system.
#unix linux which one you choose.
#unix is easy to learn.unix is a multiuser os.Learn unix .unix is a powerful.
#Implement below queries on file
#Replace all the word from unix to linux
#Replace only 3rd occurance unix to linux
#Replace a string in 2 nd line only from Unix to Linux
#Delete a pertuculer line (5th )line from file
#Hint : Use sed command

echo "\n Creating a file name Q5.txt"
touch Q5.txt

echo "Before"
cat Q5.txt
echo 

echo "\nAfter"
echo "\n Relpacing all the word from unix to linux"
sed 's/unix/linux/' Q5.txt

echo "\n Replacing only 3rd occurance unix to linux"
sed 's/unix/linux/3' Q5.txt

echo "\n Replace a string in 2 nd line only from Unix to Linux"
sed 's/unix/linux/3g' Q5.txt

echo "\nDelete a pertuculer line (5th )line from file"
sed '4d' Q5.txt