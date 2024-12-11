#Write a shell script that uncompresses the folder files separetely

folder=folder
for file in "$folder"/*; do
    echo "Compressing file"
    gunzip $file
done