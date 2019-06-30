#include <stdio.h>

int main() {
    int a, b, c, x, y;
    int max;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
    if ( a > b ) {
        max = a;
    } else {
        max = b;
    }
    
    if ( max < c ) {
        max = c;
    }

    if ( max < x ) {
        max = x;
    }

    if ( max < y ) {
        max = y;
    }
    
    printf("%d\n", max);
    
    return 0;
}
