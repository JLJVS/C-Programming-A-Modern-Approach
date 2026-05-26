#include <stdio.h>

struct complex {
    double real;
    double imaginary;
};

struct complex make_complex(double real, double imag){
    struct complex c = { real, imag};
    return c;
}

struct complex add_complex(struct complex c1, struct complex c2){
    struct complex c = {c1.real + c2.real, c1.imaginary + c2.imaginary};
    return c;
}

int main(void)
{
    struct complex c1, c2, c3;

    /* ---- Test 1: Basic creation ---- */
    c1 = make_complex(3.0, 4.0);
    printf("Test 1: c1 = (%f, %f)\n", c1.real, c1.imaginary);

    /* ---- Test 2: Another creation ---- */
    c2 = make_complex(-2.0, 5.5);
    printf("Test 2: c2 = (%f, %f)\n", c2.real, c2.imaginary);

    /* ---- Test 3: Add two complex numbers ---- */
    c3 = add_complex(c1, c2);
    printf("Test 3: c3 = c1 + c2 = (%f, %f)\n", c3.real, c3.imaginary);

    /* ---- Test 4: Adding zeros ---- */
    struct complex zero = make_complex(0.0, 0.0);
    c3 = add_complex(c1, zero);
    printf("Test 4: c1 + zero = (%f, %f)\n", c3.real, c3.imaginary);

    /* ---- Test 5: Adding opposites ---- */
    struct complex neg = make_complex(-c1.real, -c1.imaginary);
    c3 = add_complex(c1, neg);
    printf("Test 5: c1 + (-c1) = (%f, %f)\n", c3.real, c3.imaginary);

    
    return 0;
}