*This project has been created as part of the 42 curriculum by <login>.*

# Libft

## Description

Libft is my first own C library. The goal of the project is to understand how the standard C functions work by reimplementing them myself, and to build a set of general-purpose utilities that will be reused in future 42 projects.

The library is compiled into a static archive, `libft.a`, using `ar` (no `libtool`), with the flags `-Wall -Wextra -Werror`. It uses no global variables, and every function follows the 42 Norm.

### Library content

**Part 1 - Libc functions** (same behavior as the originals, prefixed with `ft_`)

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Character conversion: `ft_toupper`, `ft_tolower`
- Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`
- Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

**Part 2 - Additional functions**

- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa`, `ft_strmapi`, `ft_striteri`
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

**Part 3 - Linked list** (using the `t_list` structure)

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstsize`, `ft_lstlast`
- `ft_lstdelone`, `ft_lstclear`
- `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation

From the root of the repository:

    make        # builds libft.a
    make clean  # removes object files
    make fclean # removes object files and libft.a
    make re     # rebuilds everything

### Usage

Include the header in your code:

    #include "libft.h"

Then compile your program and link it with the library:

    cc -Wall -Wextra -Werror main.c -L. -lft -o my_program

## Resources

- `man` pages of the reimplemented functions (`man 3 strlen`, `man 3 memmove`, etc.)
- The 42 Norm (checked with `norminette`)
- GNU Make and `ar` documentation
- Peer discussions during the 42 curriculum

### Use of AI

AI was used as a learning and organization aid, not to write the library code:

- Planning: building a work order for the functions and a time plan.
- Git/GitHub setup: understanding how to configure Git and push to the repository.
- README: generating the structure of this file.

All the library functions were written, tested, and understood by me.
