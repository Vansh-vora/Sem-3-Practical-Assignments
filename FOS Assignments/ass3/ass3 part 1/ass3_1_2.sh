#Write a shell script to make use of awk command to display the 
#following output. Such that it prints the first field and string of 10 
#characters (right justified), then a space and display third field
#and then a second record in new line.
#E.g.
#CIS 262
#Canada 24
#China 866
#USA 219
#Brazil 116

touch Q2.txt
echo "\n file created successfully"

awk '{printf "%10s %s\n",$1, $3}' Q2.txt