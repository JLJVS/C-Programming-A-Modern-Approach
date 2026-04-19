#include <stdio.h>
#include <string.h>

int main(void)
{
    char  first_name[30], last_name[30];
    printf("Enter a first and last name: ");
    scanf("%30s %30s", first_name, last_name);

    char first_letter = first_name[0];
    printf("%s, %c.", last_name, first_letter);
   

    return 0;
}