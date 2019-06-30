/*Условие задачи
Считать с клавиатуры положительную длину числовой последовательности и саму последовательность.
Проверить, упорядочена ли последовательность по неубыванию. Если упорядочена вывести на экран «yes», в противном случае вывести «no».
Пример ввода
5
-20 -15 0 12 15
Пример вывода
yes*/

#include <stdio.h>

int main() {
    int length, min, sequence;
    
    scanf("%d %d", &length, &min);
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &sequence);
        if ( sequence < min ) {
            printf("no\n");
            return 0;
        } else {
            min = sequence;
        }
    }
    printf("yes\n");
    
    return 0;
}
