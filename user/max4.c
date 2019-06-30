#include <stdio.h>

int main() {
    int a, b, c, x;
    int max;
    
    scanf("%d %d %d %d", &a, &b, &c, &x);
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
    
    printf("%d\n", max);
    
    return 0;
}
