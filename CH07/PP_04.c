#include <stdio.h>
#include <string.h>


int main(void)
{
    char phone[50];
    printf("Enter phone number: ");
    scanf("%50s", &phone);

    size_t len = strlen(phone);
    
    for (size_t i=0; i< len; i++){
        switch(phone[i]){
            case 'A':
            case 'B':
            case 'C':
                printf("%d", 2);
                break;
            case 'D':
            case 'E':
            case 'F':
                printf("%d", 3);
                break;
            case 'G':
            case 'H':
            case 'I':
                printf("%d", 4);
                break;
            case 'J':
            case 'K':
            case 'L':
                printf("%d", 5);
                break;
            case 'M':
            case 'N':
            case 'O':
                printf("%d", 6);
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                printf("%d", 7);
                break;
            case 'T':
            case 'U':
            case 'V':
                printf("%d", 8);
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                printf("%d", 9);
                break;
            default:
                printf("%c", phone[i]);
        }
    }


    return 0;
}