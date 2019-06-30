/*Считать с клавиатуры целое положительное число - количество чисел в последовательности.
Затем считать с клавиатуры заданное количество чисел и вывести наименьшее из них.
Данная задача решается без массивов.*/

#include <stdio.h>

int main() {
    int total, min;
    
    scanf("%d %d", &total, &min);
    
    for ( int i = 1; i < total; i++ ) {
        int new;
        
        scanf("%d", &new);
        
        if ( min > new ) {
            min = new;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
