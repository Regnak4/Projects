/*Вычислить и вывести факториал считанного с клавиатуры целого числа.
В случае неопределенности ответа вывести -1.
Для решения пользоваться циклами.*/

#include <stdio.h>

int main() {
    int factorial;
    int result = 1;
    
    scanf("%d", &factorial);
    
    for ( ; factorial > 0; factorial-- ) {
        result *= factorial;
    }

    if ( factorial < 0 ) {
        result = -1;
    }

    printf("%d\n", result);
    
    return 0;
}
