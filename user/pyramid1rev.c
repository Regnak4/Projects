/*Вывести числовую пирамидку на total строк. Порядок строк – обратный.
В каждой строке числа идут от единицы до номера строки через пробел.*/

#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int row = size; row >= 1; row-- ) {
        int col = 1;
        for ( ; col < row; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", col);
    }
    
    return 0;
}