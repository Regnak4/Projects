/*Вывести числовой квадрат заданного размера.
Выведенные числа начинаются с единицы и постоянно увеличиваются.
В каждой строке числа разделены пробелами.
Порядок строк обратный.
Размер считать с клавиатуры.*/

#include <stdio.h>

int main() {
    int size;
    int counter;
    
    scanf("%d", &size);
    
    counter = size * size - size + 1;
    
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 1; j < size; j++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        
        printf("%d\n", counter);
        counter -= 2 * size - 1;
    }

    return 0;
}
