# Libft

A custom C library that reimplements a set of standard functions from `<libc>`, developed as the first project of the 42 Cursus. Designed to provide fundamental functionality used across future projects.

## About

This library includes:
- Character classification and conversion functions (`ft_isalpha`, `ft_toupper`, etc.)
- Memory manipulation (`ft_memcpy`, `ft_memset`, `ft_calloc`, etc.)
- String handling (`ft_strlen`, `ft_strjoin`, `ft_split`, etc.)
- I/O utilities (`ft_putchar_fd`, `ft_putendl_fd`, etc.)
- Linked list operations (`ft_lstnew`, `ft_lstadd_back`, `ft_lstmap`, etc.)

These were implemented from scratch to replicate behavior in the C standard library.

## Getting Started

### Prerequisites
- GCC (or compatible C compiler)
- Unix-like OS (Linux, macOS, WSL)

### Installation

Clone the repository:
```
git clone https://github.com/hlntzg/Libft.git
cd Libft
```
Build the library:
```
make
```
This will generate `libft.a`.

To clean object files:
```
make clean
make fclean   # removes object files and libft.a
make re       # rebuilds everything
```

### Usage
Link `libft.a` into your C projects. Example:
```
gcc main.c -L/path/to/libft -lft -o my_program
```



### License

This project is licensed under a custom Educational Use License. It is intended 
for personal and academic use within Hive Helsinki and the 42 Network. See [LICENSE](./LICENSE) for full terms.
