#include <stdio.h>

int main(void)
{
    double value = 123.456789;

    printf("Two decimals: %.2f\n", value);   // 123.46
    printf("Six decimals:  %.6f\n", value);  // 123.456789
    printf("Scientific:    %e\n", value);    // 1.234568e+02

    return 0;
}