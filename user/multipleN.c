/*Считать с клавиатуры целое неотрицательное число-максимум.
Считать с клавиатуры целый, не равный нулю делитель.
Вывести в строку числа от нуля до указанного максимума включительно, кратные заданному делителю.*/

#include <stdio.h>

int main() {
    int cap, divisor;
    
    scanf("%d %d", &cap, &divisor);

    if ( divisor < 0) {
		divisor *= -1;
	}

    cap -= cap % divisor;

    for ( int i = 0; i < cap; i += divisor ) {
        printf("%d ", i);
    }
    printf("%d\n", cap);
    
    return 0;
}
