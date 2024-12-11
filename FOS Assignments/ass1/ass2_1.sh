#Write a shell script to display


#i. User name
echo "\n The Username is :$(whoami)"
#ii. Users home directory.
echo "\n The home directory is:$HOME"
#iii. Terminal name
echo "\n The terminal name is:$(tty)"
#iv. Terminal type.
echo "\n The terminal type is:$TERM"
#v. Machine name
echo "\n Machine name is:$(hostname)"