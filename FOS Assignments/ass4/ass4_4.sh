# Write a shell script that display disk file system in the following criteria:


#• Display file informaton of dummy files. 
    df -h
    echo
#• Display sizes in Human Readable Format.

#• Display information in KB. 
    df -k
    echo
#• Display information in MB.
    df -m
    echo
#• Display information in GB. 
    df -h --block-size=G
    echo
#• To check the file system type
    df -T
    echo
#• To see the information of only device /home file system in human readable format.
df -h /home