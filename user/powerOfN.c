/*Считать с клавиатуры целое основание и целый неотрицательный показатель. 
Вывести через пробел степени числа основания от нулевой до заданной.*/

#include <stdio.h>

int main() {
    int base, power;
    int number = 1;

    scanf("%d %d", &base, &power);

    for ( int i = 0; i < power; i++ ) {
        printf("%d ", number);
        number *= base;
    }
    printf("%d\n", number);
    return 0;
}
