#Write a shell script to find a file that has not been accessed since one year.

echo "\n File which is not accessed since one year"
find /path/to/search -type f -atime +365 -ls