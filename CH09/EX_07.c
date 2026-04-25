// int f(int a, int b)
// i int
// x double

// a) i = f(83, 12); valid
// b) x = f(83, 12); although x is not int it gets cast to double
// c) i = f(3.15, 9.28); will cast a and b to int
// d) x = f(3.15, 9.28); will cast output to double
// e) f(83, 12); will complain about casting a and b to int



int f(int a, int b){
    return a+b;
}

int main(void)
{

    int i;
    double x;

    i = f(83, 12);
    x = f(83, 12);
    i = f(3.15, 9.28);
    x = f(3.15, 8.28);
    f(3.15, 9.28);

    return 0;
}