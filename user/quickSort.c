#include <stdio.h>

int arrayScanLen(FILE *in) {
    int length;
    
    fscanf(in, "%d", &length);
    return length;
}

int arrayScan(FILE *in, int array[], int limit) {
    int length = 0;
    
    for ( ; length < limit && fscanf(in, "%d", &array[length]) == 1; length++ );
    return length;
}

int partition(int array[], int start, int end) {
    int pivot, temp;
    
    pivot = (start + end) / 2;
    temp = array[pivot];
    array[pivot] = array[end];
    array[end] = temp;
    pivot = start;
    for ( ; pivot < end && array[pivot] < array[end]; pivot++ );
    for ( int roller = pivot + 1; roller <= end; roller++ ) {
        if ( array[roller] < array[end] ) {
            temp = array[roller];
            array[roller] = array[pivot];
            array[pivot] = temp;
            pivot += 1;
        }
    }
    temp = array[pivot];
    array[pivot] = array[end];
    array[end] = temp;
    
    return pivot;
}

void quickSort(int array[], int start, int end) {
    int pivot;
    
    if ( end - start < 1 ) {
        return;
    }
    pivot = partition(array, start, end);
    quickSort(array, start, pivot-1);
    quickSort(array, pivot+1, end);
}

void arrayPrint(FILE *out, int array[], int size) {
    int total = size - 1;
    
    for ( int i = 0; i < total; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[total]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = arrayScanLen(in);
    int array[len];
    
    arrayScan(in, array, len);
    fclose(in);
    quickSort(array, 0, len-1);
    arrayPrint(out, array, len);
    fclose(out);
    
    return 0;
}
