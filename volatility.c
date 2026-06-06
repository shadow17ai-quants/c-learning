#include <stdio.h>
#include <math.h>

int main() {
    double vol = 0.02;        // base volatility (2%)
    double price = 100.0;     // current stock price

    double variance = pow(vol, 2);
    double std_dev = sqrt(variance);
    double abs_move = fabs(price * vol);

    printf("Daily variance:       %.6f\n", variance);
    printf("Daily standard dev:   %.6f\n", std_dev);
    printf("Absolute daily move:  %.6f\n", abs_move);

    return 0;
}