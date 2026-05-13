#include <stdio.h>

void censor(char s[]){

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == 'f' & s[i+1] == 'o' & s[i+2] == 'o'){
            s[i] = 'x';
            s[i+1] = 'x';
            s[i+2] = 'x';
        }
    }
}

int main(void)
{
    char s[] = "food fool";
    char t[] = "Nothing should happen here";


    printf("%s\n", s);
    censor(s);
    printf("%s\n", s);

    printf("%s\n", t);
    censor(t);
    printf("%s\n", t);

    return 0;
}