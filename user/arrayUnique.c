/*Написать функцию:
int arrayUnique(int array[], int size)
Удалить из массива дубликаты элементов. Вернуть новую длину массива.*/

#include <stdio.h>

int arrayUnique(int array[], int size) {
    int temp = array[0];
    int len = 1;

    for ( int i = 1; i < size; i++ ) {
        if ( array[i] != temp ) {
            array[len] = array[i];
            
            for ( int j = i + 1; j < size; j++ ) {
                if ( array[j] == array[len] ) {
                    array[j] = temp;
                }
            }
            len += 1;
        }
    }
    return len;
}

void printArray(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
}

int main() {
	int array[] = { 0, 1, 1, 3, 2, 2, 4, 4, 4, 5, 6, 8, 8, 10, 9, 9, 0, 0 };

    int len = arrayUnique(array, sizeof(array)/sizeof(int));
    printArray(array, len);

	return 0;
}