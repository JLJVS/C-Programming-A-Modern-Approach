#include <stdio.h>

enum Type {EM, SS};

struct PinballMachine{
    char name[40];
    int year;
    enum Type type;
    int players;
};