#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a'<=(c) && (c) <= 'z' ? (c) - 'a'+'A':(c) )

int main(void)
{
    char s[30];
    // a
    strcpy(s, "abcd");
    int i = 0;
    putchar(TOUPPER(s[++i]));
    printf("%s\n", s);
    // b
    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));
    printf("%s\n", s);


    return 0;
}