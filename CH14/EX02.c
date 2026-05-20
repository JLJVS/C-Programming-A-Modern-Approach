#include <stdio.h>

#define NELEMS(a) (sizeof((a))/sizeof((a)[0]))


int main(void)
{
    int nums1[] = {1,2,3,4,5};
    int nums2[] = {3,4,5};
    float nums3[] = {0.5, 1.5, 2.5, 3.5};


    printf("Number of elements: %zu\n", NELEMS(nums1));
    printf("Number of elements: %zu\n", NELEMS(nums2));
    // test if it also works with floats
    printf("Number of elements: %zu\n", NELEMS(nums3));


    return 0;
}