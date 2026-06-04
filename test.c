#include <stdio.h>
#include <stdbool.h>

int main() {
    int shares = 100;
    float price = 19.99f;
    double balance = 10000.50;
    char grade = 'A';
    bool isOnline = true;

    printf("Shares: %d\n", shares);
    printf("Price: $%.2f\n", price);
    printf("Balance: $%.2lf\n", balance);
    printf("Grade: %c\n", grade);
    printf("Is online: %d\n", isOnline);  // prints 1 for true

    return 0;
}