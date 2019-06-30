#include <stdio.h>

#define SIZE 3

void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for (int row = 0; row < size; row++ ) {
        for ( int col = 0, rot = size - 1; col < size; col++, rot-- ) {
            target[row][col] = source[rot][row];
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
    matrixRotate90(m, n, SIZE);
    printMatrix(m, SIZE);

    return 0;
}
