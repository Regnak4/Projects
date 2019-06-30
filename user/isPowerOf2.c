/*Считать с клавиатуры целое положительное число. 
Если число является целой степенью двойки, вывести "yes", иначе вывести "no".

Пример ввода
8
Пример вывода
yes
*/


#include <stdio.h>

int main() {
    int integer;
    
    scanf("%d", &integer);
    for ( ; integer % 2 == 0; integer /= 2 );
    if ( integer == 1 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
