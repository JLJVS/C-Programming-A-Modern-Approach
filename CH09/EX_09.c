#include <stdio.h>
// swap only swaps the copies and not the references
void swap(int a, int b);
void swap_fixed(int *a, int *b);

int main(void)
{
    int i = 1, j = 2;
    printf("original swap function \n");
    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    printf("fixed swap function \n");
    swap_fixed(&i, &j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

}
void swap_fixed(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}