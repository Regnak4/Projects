/*Считать с клавиатуры 2 целых числа - номер телефона и количество минут.
Стоимость минуты разговора составляет 1$ за звонок на городской номер и 40$ за звонок на короткий номер.
За звонок по номерам специальных служб плата не взимается.
В случае неопределенности вывести -1.*/

#include <stdio.h>

int main() {
    int number, minutes;

    scanf("%d %d", &number, &minutes);
    if ( number == 101 || number == 102 || number == 103 || number == 104 || number == 112 ) {
        printf("0$\n");
    } else if ( number >= 1000000 && number <= 9999999 ) {
        printf("%d$\n", minutes);
    } else if ( number >= 100 && number <= 999 ) {
        printf("%d$\n", minutes*40);
    } else {
        printf("-1\n");
    }
    return 0;
}
