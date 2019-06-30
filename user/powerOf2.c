/*Считать с клавиатуры целое неотрицательное число. Вывести через пробел степени числа 2 от нулевой до заданной.
Использовать цикл.*/

#include <stdio.h>

int main() {
    int power;
    int number = 1;

    scanf("%d", &power);

    for ( int i = 0; i < power; i++ ) {
        printf("%d ", number);
        number *= 2;
    }
    printf("%d\n", number);
    return 0;
}
