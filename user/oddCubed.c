/*
Условие задачи
Считать с клавиатуры целые чисал min и max. Вывести в строку кубы всех нечетных чисел в промежутке от min до max включительно.
В указаном промежутке гарантировано существует минимум одно нечетное число.
Пример ввода
0 7
Пример вывода
1 27 125 343
}*/

#include <stdio.h>

int cubed(int value) {
    int result = 1;
    
    for ( int i = 0; i < 3; i++ ) {
        result *= value;
    }
    return result;
}

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    for ( ; min < max; min++ ) {
        if ( min % 2 != 0 ) {
            printf("%d ", cubed(min));
        }
    }
    printf("%d\n", cubed(max));
}
