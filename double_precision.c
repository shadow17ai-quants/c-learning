#include <stdio.h>

int main() {
    double value = 123.456789;

    printf("Two decimals: %.2f\n", value);
    printf("Six decimals:  %.6f\n", value);
    printf("Scientific:    %e\n", value);

    return 0;
}
