#include <stdio.h>

#define SHIFT_BIT   1
#define CTRL_BIT    2
#define ALT_BIT     4


int main(void)
{
    int key_code = 13;

    int tests[] = {
        0,          // no modifiers
        SHIFT_BIT,
        CTRL_BIT,
        ALT_BIT,
        SHIFT_BIT | CTRL_BIT,
        SHIFT_BIT | ALT_BIT,
        CTRL_BIT  | ALT_BIT,
        SHIFT_BIT | CTRL_BIT | ALT_BIT,
        8,          // unrelated bit
        8 | SHIFT_BIT, // unrelated + modifier
        15          // 0b1111 (all modifiers + extra bit)
    };

    int num_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < num_tests; i++) {
        int key_code = tests[i];

        printf("key_code = %2d -> ", key_code);

        if ((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
            printf("No modifier keys pressed\n");
        else
            printf("Modifier key(s) detected\n");
    } 
    
    return 0;
}