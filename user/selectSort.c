#include <stdio.h>

void selectSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;
        
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[min] ) {
                min = j;
            }
        }

        if ( min != i ) {
            int temp = array[i];

            array[i] = array[min];
            array[min] = temp;
        }
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;
    for( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int array[] = {0, 4, 7, 8, 3, 2, 9, 1, 5, 6};
    
    selectSort(array, 10);
    arrayPrint(array, 10);

    return 0;
}
