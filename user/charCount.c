/*Условие задачи
В файле task.in задана последовательность символов.
Вывести в task.out количество вхождений латинских букв, которые встречаются в последовательности.
Большие буквы считать как маленькие.
Пример ввода
Hello!
Пример вывода
e 1
h 1
l 2
o 1*/

#include <stdio.h>

#define LIMIT 101

int main() {
    int array[LIMIT];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( int i = 0; i < LIMIT; array[i] = 0, i++ );
    for ( char symbol; fscanf(in, "%c", &symbol) == 1; ) {
        if ( symbol > 96 && symbol < 123 ) {
            array[symbol-97] += 1;
        }
        if ( symbol > 64 && symbol < 91 ) {
            array[symbol-65] += 1;
        }
    }
    fclose(in);
    for ( int i = 0; i < LIMIT; i++ ) {
        if ( array[i] != 0 ) {
            fprintf(out, "%c %d\n", i+97, array[i]);
        }
    }
    fclose(out);
    
    return 0;
}
