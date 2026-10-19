#include <stdio.h>

int main(void) {
    int x;
    if (scanf("%d" , &x) != 1){return 1;}
    double result = 1.0 / (double)(x+100);
    printf ("%.15f\n", result);
    return 0;
}
