#include <stdio.h>

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define LINE_FILE __FILE__ ":" STR(__LINE__)


int main(void)
{
    const char *s1 = LINE_FILE;
    printf("Example 1: %s\n", s1);

    // Another example on a different line
    const char *s2 = LINE_FILE;
    printf("Example 2: %s\n", s2);

    // And one more
    const char *s3 = LINE_FILE;
    printf("Example 3: %s\n", s3);

    return 0;
}