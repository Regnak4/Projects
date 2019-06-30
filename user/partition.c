/*
Условие задачи
int partition(int array[], int start, int end)
В качестве опорного элемента брать среднее арифметическое между start и end с округлением вниз.*/
#include <stdio.h>

int partition(int array[], int start, int end) {
    int pivotIndex = (start + end) / 2;
    int pivot = array[pivotIndex];
    
    array[pivotIndex] = array[end];
    array[end] = pivot;
    for ( int i = start, minIndex = start, maxIndex = start; minIndex < end && maxIndex < end; i++ ) {
        int tmp;
        
        for ( maxIndex = i; array[maxIndex] < pivot; maxIndex++ );
        for ( minIndex = maxIndex; array[minIndex] > pivot; minIndex++ );
        tmp = array[minIndex];
        array[minIndex] = array[maxIndex];
        array[maxIndex] = tmp;
        if ( minIndex == end ) {
            pivotIndex = maxIndex;
        }
        if ( maxIndex == end ) {
            pivotIndex = minIndex;
        }
    }
    
    return pivotIndex;
}

int main() {
    int array[] = { 9, 1, 4, 5, 8, 7, 2, 3, 6, 0 };
    
    partition(array, 4, 8);
    int last = sizeof(array)/sizeof(int);

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
