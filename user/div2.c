/*Считать min, max. Вывести в столбик чётные числа от min до max включительно.*/

#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 != 0 ) {
        min -= min % 2 - 2;
    }
    if ( max % 2 != 0 ) {
        max -= max % 2;
    }

    for ( ; min < max; min += 2 ) {
        printf("%d\n", min);
    }
    printf("%d\n", max);

    return 0;
}
