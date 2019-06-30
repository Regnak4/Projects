/*Считать с клавиатуры целое положительное число.
Вывести в строку все числа, кратные 5, от нуля до указанного числа включительно.*/

#include <stdio.h>

int main() {
    int aliquot;
    
    scanf("%d", &aliquot);

    aliquot -= aliquot % 5;

    for ( int i = 0; i < aliquot; i +=5 ) {
        printf("%d ", i);
    }
    printf("%d\n", aliquot);
    
    return 0;
}
