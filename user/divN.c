/*Считать с клавиатуры целые числа min, max и положительный делитель. 
Вывести в столбик числа, кратные делителю, от min до max включительно.*/

#include <stdio.h>

int main() {
    int min, max, divisor;
    int remainder;
    
    scanf("%d %d %d", &min, &max, &divisor);
    
    remainder = min % divisor;
    if ( remainder > 0 ) {
        min += divisor;
    }
    min -= remainder;
    for ( int i = min; i <= max; i += divisor ) {
        printf("%d\n", i);
    }
    
    return 0;
}
