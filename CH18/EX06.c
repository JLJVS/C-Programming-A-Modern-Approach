#include <stdio.h>

void print_error(const char *message)
{


    static int n = 1;
    
    printf("Error %d: %s\n", n++, message);
}

int main(void) {
    print_error("File not found");
    print_error("Invalid input");
    print_error("Connection timed out");

    return 0;
}