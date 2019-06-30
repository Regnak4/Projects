#include <stdio.h>

void bubbleSort(int array[], int size) {
    int isSorted = 0;
    int last = size - 1;

    for( int i = 0; i < last && !isSorted; i++ ) {
        int limit = size - i;
        
        isSorted = 1;

        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( array[j] > array[next] ) {
                int temp = array[j];

                array[j] = array[next];
                array[next] = temp;

                isSorted = 0;
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
    
    bubbleSort(array, 10);
    arrayPrint(array, 10);

	return 0;
}
