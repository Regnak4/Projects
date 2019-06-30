/*Считать с клавиатуры целое положительное число.
Вывести в строку все чётные числа от нуля до указанного числа включительно.*/

#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    number -= number % 2;

    for (int i = 0 ; i < number ; ){
    	printf("%d ", i);
    	i += 2;
    }
    printf("%d\n", number);

	return 0;
}