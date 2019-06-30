//Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.

#include <stdio.h>

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);

    if ( min % 3 != 0 ) {
        min -= min % 3 - 3;
    }
    if ( max % 3 != 0 ) {
        max -= max % 3;
    }

    for ( ; min <= max; min += 3) {
        printf("%d\n", min);
    }

    return 0;
}
