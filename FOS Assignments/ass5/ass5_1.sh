#Write a shell script to find all the background and forground processes.

echo "\n Background processes"
jobs
echo "\n Forground Processes"
ps -f | grep -v grep