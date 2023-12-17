#!/bin/bash
gcc -Werror -Wextra -Wall -c *.c 
ar rc libft.a *.o