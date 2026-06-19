#include <stdio.h>

// should use | instead of + and add parentheses

unsigned short create_short(unsigned char high_byte, unsigned char low_byte){
    return (high_byte << 8) | low_byte;
}


int main(void)
{
    struct {
        unsigned char high;
        unsigned char low;
        unsigned short expected;
    } tests[] = {
        {0x00, 0x00, 0x0000},   // no bits
        {0x00, 0xFF, 0x00FF},   // low byte only
        {0xFF, 0x00, 0xFF00},   // high byte only
        {0x12, 0x34, 0x1234},   // typical hex pair
        {0xAB, 0xCD, 0xABCD},   // random hex
        {0xFF, 0xFF, 0xFFFF},   // all bits set
    };

    int count = sizeof(tests)/sizeof(tests[0]);

    for (int i = 0; i < count; i++) {
        unsigned short result = create_short(tests[i].high, tests[i].low);
        printf("Test %d: high=0x%02X low=0x%02X -> 0x%04X (expected 0x%04X)%s\n",
               i,
               tests[i].high,
               tests[i].low,
               result,
               tests[i].expected,
               result == tests[i].expected ? " OK" : " FAIL");
    }

    return 0;
}