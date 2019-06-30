#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int temp[size];
    int i = lo;
    int j = mid + 1;
    int k;

    mid += 1;
    hi += 1;
    for ( k = 0; j < hi && i < mid; k++ ) {
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
    for ( int i = lo, j = 0; i < hi; i++, j++ ) {
        array[i] = temp[j];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;
    
    if ( lo < hi ) {
        mergeSort(array, lo, mid);
        mergeSort(array, mid+1, hi);
        merge(array, lo, mid, hi);
    }
}

int scanLen(FILE *in) {
    int size;
    
    fscanf(in, "%d", &size);
    return size;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = scanLen(in);
    int array[len];
    
    for ( int i = 0; i < len; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    
    mergeSort(array, 0, len-1);
    
    for ( int i = 0; i < len - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[len-1]);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
