/*Вывести числовой квадрат заданного размера.
В каждой строке числа идут с единицы через пробел.
Размер считать с клавиатуры.*/

#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int length = 0; length < size; length++ ) {
        for ( int width = 1; width < size; width++ ) {
            printf("%d ", width);
        }
        printf("%d\n", size);
    }
    
    return 0;
}
