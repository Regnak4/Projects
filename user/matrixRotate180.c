#include <stdio.h>

#define SIZE 3

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0, rot = size - 1; row < size; row++, rot-- ) {
        for ( int col = 0, cot = size - 1; col < size; col++, cot-- ) {
            target[row][col] = source[rot][cot];
        }
    }
}

void fillMatrix(int target[SIZE][SIZE], int size) {
    int couter = 1;
    for ( int row = 0; row < SIZE; row++ ) {
        for ( int col = 0; col < SIZE; col++ ) {
            target[row][col] = couter++;
        }
    }
}

void printMatrix(int source[SIZE][SIZE], int size) {
    int limit = size - 1;
    for ( int row = 0; row < SIZE; row++ ) {
        printf("[");
        for ( int col = 0; col < limit; col++ ) {
            printf("%2d, ", source[row][col]);
        }
        printf("%2d]\n", source[row][limit]);
    }
}

int main() {
    int size = SIZE;
    int n[size][size];
    int m[size][size];
    
    fillMatrix(n, size);
    printMatrix(n, size);
    printf("---------------------------------------------\n");
    matrixRotate180(m, n, SIZE);
    printMatrix(m, SIZE);

    return 0;
}
