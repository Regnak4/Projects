/*Вывести числовую пирамидку на total строк.
В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.*/

#include <stdio.h>

int main() {
    int size;
    int counter = 1;
    scanf("%d", &size);
    
    for ( int row = 1; row <= size; row++ ) {
        for ( int col = 1; col < row; col++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }
    
    return 0;
}
