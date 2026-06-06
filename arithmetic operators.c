#include <stdio.h>


int main() {
    // arithmetic operators = symbols used to perform mathematical operations on operands (values and variables)

    int x = 6;
    int y = 7;

    printf("x + y = %d\n", x + y);   // addition: 13
    printf("x - y = %d\n", x - y);   // subtraction: -1
    printf("x * y = %d\n", x * y);   // multiplication: 42
    printf("x / y = %d\n", x / y);   // integer division: 0 (because 6/7 = 0 in ints)
    printf("x %% y = %d\n", x % y);  // modulo (remainder): 6

    return 0;
}