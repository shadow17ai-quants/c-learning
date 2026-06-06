#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("(a + b) / 2 = %d\n", (a + b) / 2);
    printf("a + b / 2   = %d\n", a + b / 2);

    // Explanation: '/' has higher precedence than '+'
    // So b/2 = 10, then a + 10 = 20.

    return 0;
}