#include <stdio.h>

int binomial(int row, int col) {
    int koef = 1;
    
    if ( row - col > col ) {
        col = row - col;
    }
    for ( int i = col + 1, j = 1; i <= row && j < (row - col + 1); i++, j++ ) {
        koef = koef * i;
        koef = koef / j;
    }

    return koef;
}

int main() {
    int total;
    int col;

    scanf ("%d", &total);
    for ( int row = 0; row < total; row++ ) {
        for ( col = 0; col < row; col++ ) {
            printf ("%d ", binomial(row, col));
        }
        printf("%d\n", binomial(row, col));
    }

    return 0;
}
