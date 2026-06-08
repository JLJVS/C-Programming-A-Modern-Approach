#include <stdio.h>

/*
Write declarations for the following variables and functions:
------------------------------------------------------------------------
a) p is a pointer to a function with a character pointer argument that returns a character pointer.

char *(*p)(char);

== 

typedef char *FuncCharPtr(char *);
FuncCharPter *p;


-------------------------------------------------------------------------
b) f is a function with two arguments: p, a pointer to a structure with tag t, and n, a long integer, f returns a pointer to a function that has no arguments and return nothing.

void (*f(struct t *p, long n))(void);

==

struct t;

typedef void (*FuncVoidNoArgs)(void);

FuncVoidNoArgs f(struct t *p, long n);

-------------------------------------------------------------------------
c) a is an array of a initially point to functions named insert, search, update and print.

void insert(void);
void search(void);
void update(void);
void print(void);

==

void (*a[])(void) = { insert, search, update, print };

-------------------------------------------------------------------------
d) b is an array of 10 pointers to functions with two int arguments that return structures with tag t.

struct t (*b[10]))int, int;

==

struct t;

typedef struct t (*FuncTwoIntToT)(int, int);

FuncTwoIntToT b[10];

*/