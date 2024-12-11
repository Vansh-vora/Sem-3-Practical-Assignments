#Create a .txt file contain list of atleast 20 name of the cities and 
#implement following commands:
#1) Cut the 2 -4 characters from all cities
#2) Sort all city names
#3) Display first five cities
#4) Display last five cities

touch Q1.txt

echo "File Created Successfully"

echo "\n Cut the 2 -4 characters from all cities"
cut -c 2-4 Q1.txt

echo "\n Srot all Citi Names"
sort Q1.txt

echo "\n Display first five cities"
head -5 Q1.txt

echo "\n Display last five cities"
tail -5 Q1.txt