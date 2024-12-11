#Create a demo.txt file contain list of atleast 20 name of the cities and implement following 
#commands:

cat <<EOF >Demo.txt
Tokyo
New York
Paris
London
Sydney
Cairo
Rio de Janeiro
Berlin
Buenos Aires
Cape Town
Mumbai
Istanbul
Toronto
Mexico City
Rome
Nairobi
Bangkok
Dubai
Los Angeles
Seoul 
EOF

echo "Cut the 2 -4 characters from all cities:"
cut -c 2,4 Demo.txt
echo
echo "Sort all city names:"
sort Demo.txt
echo
#
echo "Display first five cities:"
head -5 Demo.txt
echo
echo "Display last five cities:"
tail -5 Demo.txt