/*Считать с клавиатуры целое положительное число.
Вывести в строку все нечётные числа от нуля до указанного числа включительно.*/

#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if ( number % 2 == 0 && number != 0 ) {
        number -= 1;
    }

    for ( int i = 1; i < number; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", number);

    return 0;
}
