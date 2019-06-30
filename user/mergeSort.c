#include <stdio.h>

#define SIZE 10

void merge(int array[], int lo, int mid, int hi) {
	int size = hi - lo;
	int temp[size];
    int i = lo;
    int j = mid;
    int k = 0;

    for ( ; i < mid && j < hi ; k++ ) {
        if ( array[i] <= array[j] ) {
            temp[k] = array[i];
            i += 1;
        } else {
        	temp[k] = array[j];
        	j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        temp[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        temp[k] = array[j];
    }
    for ( i = lo, k = 0; i < hi ; i++, k++ ) {
        array[i] = temp[k];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;

    if ( lo != mid ) {
    	mergeSort(array, lo, mid);
    	mergeSort(array, mid, hi);
    	merge(array, lo, mid, hi);
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

    arrayPrint(array, SIZE);
    printf("===================\n");
    mergeSort(array, 0, 10);
    arrayPrint(array, SIZE);

	return 0;
}
