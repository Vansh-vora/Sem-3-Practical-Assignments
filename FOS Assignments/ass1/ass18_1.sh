#Check the current working directory and who is the user then make a directory and a file in it 
#named as “Demo.sh”. Change its permission to make it executable and then rename that file with 
#“New_file.sh”.

echo "\n current working directiory is :"
pwd

echo "\n The User who make the directory:"
whoami

echo "\n Making the file name Demo.sh"
touch Demo.sh

#changing it to executable
chmod +x Demo.sh

#renaming
mv Demo.sh New_file.sh

#listing permission again
ls -l New_file.sh
