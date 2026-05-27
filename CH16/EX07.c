#include <stdio.h>


struct fraction {
    int numerator;
    int denominator;
};

int gcd(int a, int b){
    if (a <= 0 || b <= 0){
        return 1;
    }  
    int c = 0;
    while (b != 0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

struct fraction reduce(struct fraction f){
    int g = gcd(f.numerator, f.denominator);
    struct fraction reduced_f = {f.numerator/g, f.denominator/g};
    return reduced_f;
}

struct fraction frac_addition(struct fraction f1, struct fraction f2){
    struct fraction new_frac = {(f1.numerator*f2.denominator + f2.numerator*f1.denominator), (f1.denominator*f2.denominator)};
    new_frac = reduce(new_frac);
    return new_frac;
}

struct fraction frac_subtraction(struct fraction f1, struct fraction f2){
    struct fraction new_frac = {(f1.numerator*f2.denominator - f2.numerator*f1.denominator), (f1.denominator*f2.denominator)};
    new_frac = reduce(new_frac);
    return new_frac;
}

struct fraction frac_multiplication(struct fraction f1, struct fraction f2){
    struct fraction new_frac = {f1.numerator*f2.numerator, (f1.denominator*f2.denominator)};
    new_frac = reduce(new_frac);
    return new_frac;
}

struct fraction frac_division(struct fraction f1, struct fraction f2){
    struct fraction new_frac = {(f1.numerator*f2.denominator), (f1.denominator*f2.numerator)};
    new_frac = reduce(new_frac);
    return new_frac;
}

void print_fraction(struct fraction f){
    printf("%d/%d\n", f.numerator, f.denominator);
}

int main() {
    struct fraction a = {1, 2};
    struct fraction b = {1, 3};

    printf("a = ");
    print_fraction(a);
    printf("b = ");
    print_fraction(b);

    printf("\nAddition: ");
    print_fraction(frac_addition(a, b));

    printf("Subtraction: ");
    print_fraction(frac_subtraction(a, b));

    printf("Multiplication: ");
    print_fraction(frac_multiplication(a, b));

    printf("Division: ");
    print_fraction(frac_division(a, b));

    // More tests
    struct fraction c = {5, 6};
    struct fraction d = {7, 8};

    printf("\nMore tests:\n");

    printf("c = ");
    print_fraction(c);
    printf("d = ");
    print_fraction(d);

    printf("\nAddition: ");
    print_fraction(frac_addition(c, d));

    printf("Subtraction: ");
    print_fraction(frac_subtraction(c, d));

    printf("Multiplication: ");
    print_fraction(frac_multiplication(c, d));

    printf("Division: ");
    print_fraction(frac_division(c, d));

    return 0;
}