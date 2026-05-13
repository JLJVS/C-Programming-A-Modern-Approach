#include <stdio.h>

/*
a) prints nothing so the entry at the start of the string becomes \0?
b) prints nothing so the entry at the start of the string becomes \0
c) prints nothing so the entry at the start of the string becomes \0
d) concatenates "" at the end so it will print str.
*/

int main(void)
{
    char str[] = "Hello there, you cutie";
    
    printf("%s\n", str);
    // a *str=0;
    // b str[0] = '\0';
    // c strcpy(str, "");
    // d
    strcat(str, "");
    printf("%s\n", str);



    return 0;
}