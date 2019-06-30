/*Условие задачи
Считать с клавиатуры целое число в десятичной системе счисления
и основание новой системы счисления (целое число от 2 до 36).
Вывести в консоль число, записанное в новой системе счисления.
В качестве цифр, превышающих 9, использовать заглавные буквы латинского алфавита.
Для решения можно пользоваться только циклами. Задача решается без массивов.
Использовать только тип int.
Пример ввода
-255 16
Пример вывода
-FF*/

#include <stdio.h>

int pwr(int number, int power) {
    int result = 1;
    
    for ( int i = 1; i <= power; i++ ) {
        result *= number;
    }
    return result;
}

int main() {
    int numberDec, base;
    int maxPower = 0;
    
    scanf("%d %d", &numberDec, &base);
    
    if ( numberDec < 0 ) {
        numberDec *= -1;
        printf("-");
    }
    
    for ( int dividend = numberDec/base; dividend > 0; dividend /= base ) {
        maxPower += 1;
    }
    
    for ( int power = maxPower; power >= 0; power-- ) {
        int basepower = pwr(base, power);
        int digit = numberDec / basepower;
        
        if ( digit < 10 ) {
            printf("%d", digit);
        } else {
            printf("%c", 55+digit);
        }
        numberDec %= basepower;
    }
    printf("\n");
    
    return 0;
}
