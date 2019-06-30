/*Условие задачи
Считать с клавиатуры целое положительное число, вывести на экран количество всех делителей этого числа.
Пример ввода
12
Пример вывода
6*/

#include <stdio.h>

int main() {
    int divide;
    int divisors = 1;

    scanf("%d", &divide);

    for ( int i = 1; i < divide; i++ ) {
        if ( divide % i == 0 ) {
            divisors += 1;
        }
    }
    printf("%d\n", divisors);

    return 0;
}

