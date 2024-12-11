#7. Write a shell script that find files and directories based on days :

#• Find all files which are modified 20 days back
    find -type f -mtime 20
#• Find all files which are accessed 30 days back
find -type f -atime 30
#• Find all files which are modified more than 50 days back and less than 75 days
find -type f -mtime +50 -mtime -75