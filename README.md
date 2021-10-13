# BSQ

TODO:
1. Needed functions list:
	- main lol
	- a function to check if the square is valid
	- a function to check if the map is valid
	- a function to convert the string input to 2 dimensional array

BUG TO FIX:
    - Last line of the board is not checked properly.

TODO:
    - Check Makefile relink.
    - Change putstr to puterr.

NOTE:
    - When reading from standard input:
        1. When we use `cat file | ./bsq` it works
        2. When we use `perl gen_map.pl 200 200 1 | ./bsq` we get `map error`

BUG TO FIX TOMORROW:
    - Add a `buff[ret] = 0;` to read\_input() else using multiple files in argv
    will lead to `map error`.
