#include <stdio.h>
#include <ctype.h>

void capitalize(char s[]){
    for (int i=0; s[i] != '\0'; i++){
        s[i] = toupper(s[i]);
    }
}

int main(void)
{
    char s[] = "Well hello there 1337 kidz.@!$(^&)";
    printf("%s\n", s);
    capitalize(s);
    printf("%s\n", s);

    return 0;
}