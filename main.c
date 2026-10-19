#include <stdio.h>

int main(void) {int x;
    /* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
    if (scanf("%d", &x) != 1) {
        return 1;}
double result = 1.0 / (double)(x + 100);
printf("%.15f\n", result);
    
    return 0;
}
