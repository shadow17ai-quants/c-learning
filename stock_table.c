#include <stdio.h>

int main() {
    // Hardcoded stock data
    char symbol1[] = "AAPL";
    double price1 = 175.23;
    double change1 = 1.23;

    char symbol2[] = "GOOGL";
    double price2 = 132.50;
    double change2 = -0.45;

    char symbol3[] = "MSFT";
    double price3 = 330.15;
    double change3 = 0.89;

    char symbol4[] = "AMZN";
    double price4 = 125.80;
    double change4 = -1.10;

    char symbol5[] = "NVDA";
    double price5 = 895.60;
    double change5 = 2.30;

    // Print header
    printf("%-8s %10s %7s\n", "Symbol", "Price", "Change%");
    printf("----------------------------\n");

    // Print each stock
    printf("%-8s %10.2f %+7.2f%%\n", symbol1, price1, change1);
    printf("%-8s %10.2f %+7.2f%%\n", symbol2, price2, change2);
    printf("%-8s %10.2f %+7.2f%%\n", symbol3, price3, change3);
    printf("%-8s %10.2f %+7.2f%%\n", symbol4, price4, change4);
    printf("%-8s %10.2f %+7.2f%%\n", symbol5, price5, change5);

    return 0;
}