/*int average(int a, int b)
Вернуть среднее арифметическое двух целых чисел. Использовать только тип int.
Если среднее значение не является целым, то округлить его к ближайшему целому в сторону нуля.*/

#include <stdio.h>

int average(int a, int b) {
    if ( a < 0 && b > 0 ) {
        return (a + b) / 2 - (a % 2 - b % 2) / 2;
    }
    if ( a > 0 && b < 0 ) {
        return (a + b) / 2 - (a % 2 - b % 2) / 2;
    }
    return a / 2 + b / 2 + (a % 2 + b % 2) / 2;
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n", average(a, b));
    
    return 0;
}
