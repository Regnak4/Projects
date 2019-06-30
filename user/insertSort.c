#include <stdio.h>

void insertSort(int array[], int len) {
    int last = len - 1;

	for ( int i = 0; i < last; i++ ) {
		for ( int j = 0; j < last; j++ ) {
			int min = j + 1;
            if ( array[j] > array[min] ) {
                int temp = array[j];

                array[j] = array[min];
                array[min] = temp;
            }
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
    
    insertSort(array, 10);
    arrayPrint(array, 10);

    return 0;
}
