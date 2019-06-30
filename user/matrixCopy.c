#include <stdio.h>

#define SIZE 4

void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for( int i = 0; i < SIZE; i++) {
    	for( int j = 0; j < SIZE; j++) {
            target[i][j] = source[i][j];
    	}
    }
}

int main() {
    int n[SIZE][SIZE];
    int m[SIZE][SIZE];
    
    for( int i = 0; i < SIZE; i++) {
    	for( int j = 0; j < SIZE; j++) {
            n[i][j] = 0;
    	}
    }

    matrixCopy(n[SIZE][SIZE], m[SIZE][SIZE], SIZE);

    for( int i = 0; i < SIZE; i++) {
    	for( int j = 0; j < SIZE; j++) {
            printf("%d ", m[i][j]);
    	}
    }

	return 0;
}
