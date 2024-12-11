#Write a shell script to create two files f1 and f2 and perform the following operation.
#• Compare these two files.
    touch f2.txt
    cmp f1 f2
#• Display the difference of these two files.
 diff f1 f2
#• Display the common between these two files.
comm f1 f2