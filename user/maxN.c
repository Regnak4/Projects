/*Считать с клавиатуры целое положительное число - количество чисел в последовательности.
Затем считать с клавиатуры заданное количество чисел и вывести наибольшее из них.*/

#include <stdio.h>

int main() {
    int total, max;
    
    scanf("%d %d", &total, &max);
    
    for ( int i = 1; i < total; i++ ) {
        int new;
        
        scanf("%d", &new);
        
        if ( max < new ) {
            max = new;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
