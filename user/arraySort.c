/*Условие задачи
Написать функцию:
void arraySort(int array[], int size)
Отсортировать элементы в порядке неубывания.
Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.*/

#include <stdio.h>

#define SIZE 10

void arraySort(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        int max = array[i];
        int id = i;
        
        for ( int j = 0; j < i; j++ ) {
            if ( array[j] > max ) {
                max = array[j];
                id = j;
            } 
        }
        array[id] = array[i];
        array[i] = max;
    }
}

int main() {
    int last = SIZE - 1;
    int array[SIZE] = { 9, 1, 4, 5, 8, 7, 2, 3, 6, 0 };
    
    arraySort(array, SIZE);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
