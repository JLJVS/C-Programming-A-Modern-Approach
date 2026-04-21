#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char message[50];
    char c;
    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    for (int i=0; message[i] != '\0'; i++){
        c = toupper(message[i]);

        switch (c){
            case 'A':
                c = '4';
                break;
            case 'B':
                c = '8';
                break;
            case 'E':
                c = '3';
                break;
            case 'I':
                c = '1';
                break;
            case 'O':
                c = '0';
                break;
            case 'S':
                c = '5';
                break;
             
        }
        
        printf("%c", c);
    }
    printf("!!!!!!!!!!");



}