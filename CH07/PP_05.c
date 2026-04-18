#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    char word[50];
    printf("Enter a word: ");
    scanf("%50s", &word);

    size_t len = strlen(word);
    int total = 0;
    
    for (size_t i=0; i< len; i++){
        switch(toupper(word[i])){
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                total += 1;
                break;
            case 'D':
            case 'G':
                total += 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                total += 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                total += 4;
                break;
            case 'K':
                total += 5;
                break;
            case 'J':
            case 'X':
                total += 8;
                break;
            case 'Q':
            case 'Z':
                total += 8;
                break;
            
            default:
                total += 0;
        }
    }
    printf("Scrabble value : %d", total);

    return 0;
}