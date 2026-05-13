#include <stdio.h> 

/*
a) True
b) False, expected a char but got a string
c) False, exepected a string but got a char
d) True
e) False, printf expect a format string (char *) while we are trying to insert a char (int)
f) True
g) True
h) False, putchar requires a char parameter not a char * (string)
i) False, puts requires const char * (string) as parameter not a char (int)
j) True
k) True, puts automatically adds \n to end of the string.

*/


int main(void)
{
    // a printf("%c", '\n');
    // b printf("%c", "\n");
    // c printf("%s", '\n');
    // d printf("%s", "\n");
    // e printf('\n');
    // f printf("\n");
    // g putchar('\n');
    // h putchar("\n");
    // i puts('\n');
    // j puts("\n");
    // k puts("");


    printf("Finished");

    return 0;
}



    // printf("%c", '\n');
    // printf("%c", "\n");
    // printf("%s", '\n');
    // printf("%s", "\n");
    // printf('\n');
    // printf("\n");
    // putchar('\n');
    // putchar("\n");
    // puts('\n');
    // puts("\n");
    // puts("");
