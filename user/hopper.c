/*Кузнечик начинает свой путь на клетке 0 и может прыгать на расстояние от 1 до <maxJump> клеток. 
Прыжки возможны только на целое число клеток вперед.
Посчитать кол-во способов <ways>, которыми кузнечик может попасть на клетку <cell>.

В файле task.in заданы целые числа:
<maxJump> <cell>

Вывести ways в task.out.

Ограничения:
1 <= maxJump <= 100
1 <= cell <= 100
1 <= ways <= 999 999 999 999 999 999

Пример ввода
2 3
Пример вывода
3
Пояснение
Кузнечик может прыгать на 1 или 2 клетки.
На 1-ю клетку он может попасть одним способом: 0->1.
На 2-ю клетку он может попасть двумя способами: 0->2, 0->1->2.
На 3-ю клетку можно попасть тремя способами: 0->1->2->3, 0->1->3, 0->2->3.
*/

#include <stdio.h>

int inputData(FILE *in) {
    unsigned long long number;
    
    fscanf(in, "%llu", &number);
    return number;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    unsigned long long maxJump = inputData(in);
    unsigned long long cell = inputData(in);
    unsigned long long way[cell];
    unsigned long long ways;
    
    fclose(in);
    way[0] = 1;
    if ( maxJump >= cell ) {
        maxJump = cell;
    }
    for ( int i = 0, j = 1; j < maxJump; i++, j++ ) {
        way[j] = way[i] * 2;
    }
    for ( int i = maxJump; i < cell; i++ ) {
        way[i] = 0;
        for ( int j = i - 1, k = j - maxJump; way[i] < 999999999999999999 && j > k; j-- ) {
            way[i] += way[j];
        }
    }
    ways = way[cell-1];
    fprintf(out, "%llu\n", ways);
    fclose(out);
    return 0;
}
