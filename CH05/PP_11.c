#include <stdio.h>


int main(void)
{
    int digit1, digit2; 
    const char *part1;
    const char *part2;

    printf("Enter a two-digit number: " );
    scanf("%1d%1d", &digit1, &digit2);

    switch (digit1){
        case 1:
            switch(digit2){
                case 1:
                    part1 = "eleven";
                    break;
                case 2:
                    part1 = "twelve";
                    break;
                case 3:
                    part1 = "thirteen";
                    break;
                case 4:
                    part1 = "fourteen";
                    break;
                case 5:
                    part1 = "fifteen";
                    break;
                case 6:
                    part1 = "sixteen";
                    break;
                case 7:
                    part1 = "seventeen";
                    break;
                case 8:
                    part1 = "eighteen";
                    break;
                case 9:
                    part1 = "nineteen";
                    
            }
            printf("You enter the number %s.", part1);
        return 0;
        case 2:
            part1 = "twenty";
            break;
        case 3:
            part1 = "thirty";
            break;
        case 4:
            part1 = "forty";
            break;
        case 5:
            part1 = "fifty";
            break;
        case 6:
            part1 = "sixty";
            break;
        case 7:
            part1 = "seventy";
            break;
        case 8:
            part1 = "eighty";
            break;
        case 9:
            part1 = "ninety";
            break;
    }
    switch (digit2){
        case 1:
            part2 = "one";
            break;
        case 2:
            part2 = "two";
            break;
        case 3:
            part2 = "three";
            break;
        case 4:
            part2 = "four";
            break;
        case 5:
            part2 = "five";
            break;
        case 6:
            part2 = "six";
            break;
        case 7:
            part2 = "seven";
            break;
        case 8:
            part2 = "eight";
            break;
        case 9:
            part2 = "nine";
            break;
        default:
            part2 = "";
        
    }

    printf("%s, %s\n", part1, part2);
    if (part2 != ""){
        printf("You entered the number %s-%s", part1, part2);
        
    } else {
        printf("You entered the number %s", part1);
    }
    return 0;
}