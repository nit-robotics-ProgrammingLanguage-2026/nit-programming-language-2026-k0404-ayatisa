#include <stdio.h>

int main(void) {
    long long x;
    if (scanf("%lld" , &x) != 1){return 1;}
    double result = 1.0 / (double)(x+100);
    printf ("%.15f\n", result);
    return 0;
}
