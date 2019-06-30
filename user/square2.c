/*Вывести числовой квадрат заданного размера.
Выведенные числа начинаются с единицы и постоянно увеличиваются.
В каждой строке числа разделены пробелами.
Размер считать с клавиатуры.

Пример ввода
2
Пример вывода
1 2
3 4*/

#include <stdio.h>

int main() {
    int size;
    int value = 0;
    
    scanf("%d", &size);
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 1; col < size; col++ ) {
            value += 1;
            printf("%d ", value);
        }
        value += 1;
        printf("%d\n", value);
    }
    return 0;
}
