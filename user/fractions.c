/*Вывести возрастающую последовательность всех несократимых дробей в промежутке от 0 до 1, 
знаменатель которых не превышает заданное число.
Вводимое число не превышает 200.

Пользоваться массивами запрещено.*/

#include <stdio.h>

#define DIVISOR_MAX 200

int main() {
    int divisor;
    
    scanf("%d", &divisor);
    
    if (divisor <= DIVISOR_MAX) {
        printf("0/1 ");
        for ( int i = 1; i < divisor; i++ ) {
            for ( int j = divisor; j > i; j-- ) {
                if ( i == 1 || j % i != 0 ) {
                    printf("%d/%d ", i, j);
                }
            }
        }
    } else {
        return 0;
    }

    printf("1/1\n");
    
    return 0;
}
