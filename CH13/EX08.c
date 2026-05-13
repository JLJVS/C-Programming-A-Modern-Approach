#include <stdio.h>
#include <string.h>

/*
str = "Hello there. How are you doing?"
a) tire-bouchon
b) Helld-or-wi
c) Hello there. How are you doing?red?
*/

int main(void)
{
    char str[] = "Hello there. How are you doing?";
    printf("%s\n", str);
    // a strcpy(str, "tire-bouchon");
    // b strcpy(&str[4], "d-or-wi");
    // c strcat(str, "red?");
    printf("%s\n", str);


    return 0;
}