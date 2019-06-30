/*Условие задачи
Вывести число Фибоначчи с заданным целым номером, по модулю не превышающим 46.
Пример ввода
8
Пример вывода
21*/

#include <stdio.h>

int main() {
    int number;
    int first = 0;
    int second = 1;
    int fibonacci = 0;
    int flag = 1;
    
    scanf("%d", &number);
    
    if ( number < 0 ) {
        flag = 0;
        number *= -1;
    }
    if ( number == 1 || number == 2 ) {
        fibonacci = 1;
    } else {
        for ( int i = 1; i < number; i++ ) {
            fibonacci = first + second;
            first = second;
            second = fibonacci;
        }
    }
    if ( flag == 0 && number % 2 == 0 ) {
        fibonacci *= -1;
    }
    printf("%d\n", fibonacci);
    
    return 0;
}
