# Libft

## Description
Libft is a library containing custom implementations of standard C library functions, along with additional utility functions to facilitate common programming tasks. This project is part of the curriculum at 42 ecole.

## Motivation
The motivation behind creating this library is to deepen understanding of fundamental programming concepts and gain proficiency in writing efficient and reusable code.

## Features
- Custom implementations of standard C library functions such as `strlen`, `strcpy`, `strdup`, etc.
- Additional utility functions for manipulating strings, memory, linked lists, etc.
- Well-documented code with clear explanations of each function's purpose and usage.

## Getting Started
1. Clone the repository:
   git clone https://github.com/Adel2k/libft.git
2. Navigate to the `libft` directory:
3. Compile the library:

## Usage
- To use this library in your projects, simply include the `libft.h` header file in your source files and link against the compiled library (`libft.a`).
- Example usage:
```c
#include "libft.h"

int main() {
   char *str = "Hello, world!";
   ft_putstr(str);
   return 0;
}
