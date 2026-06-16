#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned short i,j,k;

    // a
    i = 8;
    j = 9;
    printf("a: i = %d, j = %d", i, j );
    printf("%hu\n", i >> 1 ); // this right shifts 8 so 8/2 = 4
    printf("%hu\n", j >> 1 ); // this rights shifts 9 so 1001 -> 100 = 4
    printf("----%hu\n", i >> 1 + j >> 1); // this groups 1 + j = 10 so it right shift i 10 bits to the right so that makes 0
    printf("--\n");
    
    // b 
    i = 1;
    printf("b: i = %d\n", i);
    printf("----%d\n", i & ~i); // creates a bit mask of 0x001 & 0x000 = 0x000
    printf("----\n");
    
    // c
    i = 2;
    j = 1;
    k = 0;
    printf("c: i = %d, j = %d, k = %d\n", i, j, k);
    printf("%hu\n", ~i); /// 0x0010 -> 0x1111 1111 1111 1101
    printf("%hu\n", ~i & j); // 0x1111 1111 1111 1101 & 0x0001 = 0x0001
    printf("%hu\n", ~i & j ^k);// 0x0001 ^ 0x0000 = 0x0000
    printf("\n");

    // d
    i = 7; j = 8; k = 9;
    printf("d: i = %d, j = %d, k = %d\n", i, j, k);
    printf("%hu\n", i );    // 0x0111
    printf("%hu\n", j ^ k); // 0x1000 ^ 0x1001 = 0x1000
    printf("%hu\n", i ^ j & k); // precedence i ^ ( j&k) 0x0111 & 0x1000 = 0x1111
    return 0;
}