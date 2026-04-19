#include <stdio.h>

int main(void) {

    float curr_num, total = 0.0f;
    char c;

    printf("Enter an expression: ");
    scanf(" %f", &total);

    while (1) {
        do {
        c = getchar();
    } while (c == ' ');

        if (c == '\n') break;
        
        scanf(" %f", &curr_num);

        if (c == '+') {
            total += curr_num;
        }
        else if (c == '-') {
            total -= curr_num;
        }
        else if (c == '*') {
            total *= curr_num;
        }
        else if (c == '/') {
            total /= curr_num;
        }
    }

    printf("Value of expression: %.2f\n", total);

}