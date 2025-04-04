/*Условие задачи
Написать функцию:
arrayShiftLeft(int array[], int size)
Реализовать циклический сдвиг массива на 1 элемент влево.
Использование дополнительного массива не разрешается.*/

/*
Условие задачи
Написать функцию:
arrayShiftLeft(int array[], int size)
Реализовать циклический сдвиг массива на 1 элемент влево.
Использование дополнительного массива не разрешается.
*/
#include <stdio.h>

#define SIZE 10

void arrayShiftLeft(int array[], int size) {
    int temp = array[0];
    
    for ( int i = 1; i < size; i++ ) {
        array[i-1] = array[i];
    }
    array[size-1] = temp;
}

int main() {
    int last = SIZE - 1;
    int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    arrayShiftLeft(array, SIZE);
    
    printf("\n");
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
