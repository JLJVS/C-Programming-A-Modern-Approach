#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

#define MAX_DIGITS 10

int main(void)
{   
    int n = 4;
    char number_string[MAX_DIGITS+1] = {0};
    char cleaned_number_string[MAX_DIGITS+1] = {0};
    int top = 0;
    char number_array[3][n*MAX_DIGITS];
    memset(number_array, ' ', sizeof(number_array));
    printf("Enter a number: ");
    scanf("%s", &number_string);
    
    for (int i = 0; i < MAX_DIGITS; i++){
        char c = number_string[i];
        if (c == '\0'){
            break;
        }
        c = number_string[i];
        switch (c){
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                cleaned_number_string[top] = c;
                top++;
            default:
                continue;
        }
    }

    for (int i = 0; i < MAX_DIGITS; i++){
        char c = cleaned_number_string[i];
        if (c == '\0'){
            break;
        }
        switch (c){
            case '0':
                number_array[0][n*i+1] = '_';
                number_array[1][n*i]   = '|';
                number_array[1][n*i+2] = '|';
                number_array[2][n*i]   = '|';
                number_array[2][n*i+1] = '_';
                number_array[2][n*i+2] = '|';
                break;
            case '1':
                number_array[1][n*i+2] = '|';
                number_array[2][n*i+2] = '|';
                break;
            case '2':
                number_array[0][n*i+1] = '_';
                number_array[1][n*i+2] = '|';
                number_array[1][n*i+1] = '_';
                number_array[2][n*i]   = '|';
                number_array[2][n*i+1] = '_';
                break;
            case '3':
                number_array[0][n*i+1] = '_';
                number_array[1][n*i+1] = '_';
                number_array[1][n*i+2] = '|';
                number_array[2][n*i+2] = '|';
                number_array[2][n*i+1] = '_';
                break;
            case '4':
                number_array[1][n*i+2] = '|';
                number_array[1][n*i]   = '|';
                number_array[1][n*i+1] = '_';
                number_array[2][n*i+2] = '|';
                number_array[2][n*i+2] = '|';
                break;
            case '5':
                number_array[0][n*i+1] = '_';
                number_array[1][n*i]   = '|';
                number_array[1][n*i+1] = '_';
                number_array[2][n*i+1] = '_';
                number_array[2][n*i+2] = '|';
                break;
            case '6':
                number_array[0][n*i+1] = '_';
                number_array[1][n*i]   = '|';
                number_array[1][n*i+1] = '_';
                number_array[2][n*i]   = '|';
                number_array[2][n*i+2] = '|';
                number_array[2][n*i+1] = '_';
                break;
            case '7':
                number_array[0][n*i+1] = '_';
                number_array[1][n*i+2] = '|';
                number_array[2][n*i+2] = '|';
                break;
            case '8':
                number_array[0][n*i+1] = '_';
                number_array[1][n*i]   = '|';
                number_array[1][n*i+1] = '_';
                number_array[1][n*i+2] = '|';
                number_array[2][n*i]   = '|';
                number_array[2][n*i+2] = '|';
                number_array[2][n*i+1] = '_';
                break;
            case '9':
                number_array[0][n*i+1] = '_';
                number_array[1][n*i]   = '|';
                number_array[1][n*i+1] = '_';
                number_array[1][n*i+2] = '|';
                number_array[2][n*i+2] = '|';
                number_array[2][n*i+1] = '_';
                break;
            default:
                break;
        }
    }
    for (int row_index = 0; row_index < 3; row_index++){
        for (int col_index = 0; col_index < 4*MAX_DIGITS; col_index++){
            printf("%c", number_array[row_index][col_index]);
        }
        printf("\n");
    }

    return 0;
}