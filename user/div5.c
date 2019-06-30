/*Считать min, max. Вывести в столбик кратные пяти числа от min до max включительно.*/

#include <stdio.h>

#define DIVISOR 5

int main() {
    int min, max;
    int remainder;
    
    scanf("%d %d", &min, &max);
    
    remainder = min % DIVISOR;
    if ( remainder > 0 ) {
        min += DIVISOR;
    }
    min -= remainder;
    for ( int i = min; i <= max; i += DIVISOR ) {
        printf("%d\n", i);
    }
    
    return 0;
}
