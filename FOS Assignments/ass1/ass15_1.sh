# Accept a file and check if the words in that file are greater than 20 print “Enough Words” else 
#print “More words to enter”.

touch file.txt
read -p "enter a file name" f

wordcount=$(wc -w <$f)

if ($wordcount -gt 20);
then
    echo "enough words"
else
    echo "More words to enter"
fi 