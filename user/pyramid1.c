/*Вывести числовую пирамидку на total строк.
В каждой строке числа идут от единицы до номера строки через пробел.*/

#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int length = 1; length <= total; length++ ) {
        for ( int width = 1; width < length; width++ ) {
            printf("%d ", width);
        }
        printf("%d\n", length);
    }
    
    return 0;
}
