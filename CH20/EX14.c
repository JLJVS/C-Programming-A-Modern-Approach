#include <stdio.h>


/*
When stored according to the IEEE floating-point standard, a float value consists of:
- 01-bit sign
- 08-bit exponent
- 23-bit fraction

Design a structure type that occupies 32 bits, with bit-field memebr corresponding to the sign, exponenet and fraction. Declare the bit-fields to have type unsigned int.

*/


struct ieee_float32 {
    unsigned int fraction : 23;  // lowest bits
    unsigned int exponent : 8;   // middle bits
    unsigned int sign     : 1;   // highest bit
};

int main(void)
{
    return 0;
}