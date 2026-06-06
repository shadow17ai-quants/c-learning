#include <stdio.h>

int main() {
    // 3 rows of mock stock data
    char sym1[] = "AAPL";
    int qty1 = 10;
    double price1 = 175.23;
    double value1 = 1752.30;
    double change1 = 1.23;

    char sym2[] = "GOOGL";
    int qty2 = 5;
    double price2 = 132.50;
    double value2 = 662.50;
    double change2 = -0.45;

    char sym3[] = "MSFT";
    int qty3 = 8;
    double price3 = 330.15;
    double value3 = 2641.20;
    double change3 = 0.89;

    // Header
    printf("%-8s %6s %10s %12s %7s\n", "Symbol", "Qty", "Price", "Value", "Change%");
    printf("--------------------------------------------------------\n");

    // Rows with format: %-8s %6d %10.2f %12.2f %+7.2f%%
    printf("%-8s %6d %10.2f %12.2f %+7.2f%%\n", sym1, qty1, price1, value1, change1);
    printf("%-8s %6d %10.2f %12.2f %+7.2f%%\n", sym2, qty2, price2, value2, change2);
    printf("%-8s %6d %10.2f %12.2f %+7.2f%%\n", sym3, qty3, price3, value3, change3);

    return 0;
}