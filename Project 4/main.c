#include <stdio.h>
#include <math.h>

int main() {

    double a = 22.05;
    double b = 17.22;
    double x = -3.78;

    double result = (a * x - atan(3 * x)) / sqrt(fabs(x)) + b;


    printf("result: %lf\n", result);

    return 0;
}
