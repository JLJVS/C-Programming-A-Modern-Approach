#include <stdio.h>
#include <ctype.h>

int main(void) {

    int count = 0, c;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n'){

        char upper_char = toupper(c);
        
        switch (upper_char) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count += 1;
                break;
            default:
                break;
        }
    }
    printf("Your sentence contains %d vowels.\n", count);
}