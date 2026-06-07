/*
a) Which storage class is used primarily to indicate that a variable or function can be shared by several files?

extern means:
- it's defined in one file
- can be used in other files

b) Suppose that variable x is to be shared by several functions in one file but hidden from functions in other files. Which storage class should x be declared to have?

Because it's supposed to be hidden in other files it has to be linked internally ->
static:
- interal linkage -> only visible in this .c file
- duration -> exists for the entire program run
- accesable -> accesable by all functions in this .c file

c) Which storage classes can affect the storage duration of a variable

auto -> automatic duration created on entry and destroyed on exit
static -> exists for entire program, retains value between calls
register -> Same lifetime as auto but suggests to be used in register used in low level not advised elsewhere due to interaction with compilers

*/