#include <stdio.h>

/*
a) static char **lookup(int level);
This seems to be a function declaration for look up
- static -> internal linkage so only visible in this .c file
- char ** -> pointer to a pointer char
- lookup(int level) -> function lookup that only takes an int level


b) volatile unsigned long io_flags;
This seems to be a global variable io_flags
- volatile -> do not optimize this variable
- unsigned long -> unsigned long integer
- io_flags -> variable name

c) extern char *file_name[MAX_FILES], path[];
This seems to be two variable declarations but not defined in this file
- extern -> definition is in another file
- char *file_name[MAX_FILES] -> char pointer to an array of size MAX_FILES
- path[] -> char array

d) static const char char token_buf[] = "";
This seems to create a read-only in this file character array
- static -> internal linkage only in this .c file
- const -> read only
- char token_buf[] -> char array
- = "" -> initalization to an empty string
*/