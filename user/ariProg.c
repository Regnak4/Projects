/*Считать с клавиатуры три целых числа - первый член, шаг и количество членов арифметической прогрессии. 
Вывести в строку через пробел члены заданной прогрессии.
Задаваемое количество больше нуля.*/

#include <stdio.h>

int main() {
    int base, step, total;
    
    scanf("%d %d %d", &base, &step, &total);
    
    for ( int i = 1; i < total; i++ ) {
        printf("%d ", base);
        base += step;
    }
    printf("%d\n", base);
    return 0;
}
