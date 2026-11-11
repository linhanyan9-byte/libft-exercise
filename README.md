*This project has been created as part of the 42 curriculum by halin.*

# Description

## goal:
Libft is a project that consists of creating my own C library by 
1. reproducing several standard C library functions.
2. implimenting additional utility functions not included inthe libc, or exist in a different form.
3. implement functions using a structure to manipulate linked list.

## brief overview
The library includes:
* Libc functions: Reimplementations of standard C functions such as strlen, memset, memcpy, strlcpy and atoi.
* Additional functions: Utility functions for string manipulation, memory allocation and character handling, such as ft_substr, ft_split, ft_itoa and ft_strtrim.
* Linked list functions: Functions to create, manipulate, iterate through and delete singly linked lists.

# instructions
## Requirements
1. A C compiler (cc or gcc).
2. GNU Make.
3. The standard C library.

## Compilation
Compile the library using the Makefile:

| command     | description                           |
|-------------|---------------------------------------|
| make        | generates the static library libft.a. |
| make clean  | Removes object files (.o).            |
| make fclean | Removes object files and libft.a.     |
| make re     | Cleans and recompiles the library.    |

## installation
* git clone git@vogsphere.42porto.com:vogsphere intra-uuid-4f3b2d1b-76d4-4ba1-b1cd-4d49946ec5ac-7784425-halin

## exucution
To use Libft in another C project, include the header file:
* include "libft.h"

Compile your program by linking it with the library:
* cc current.c -Llibft -lft -Ilibft
* -L is to look for the library*
* -I is to look for the header*
* -l is to link the library, it includes(lib.a as the name, i.e, -lft is libft.a)*

# resource

* Linux Manual Pages 
* Norminette

## AI Usage
AI assistance was used for:
1. Understanding concepts
2. Debugging
3. Discuss about edge cases