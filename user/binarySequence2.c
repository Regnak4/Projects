/*Условие задачи

В файле task.in дана последовательность символов – нулей и единиц.
Вывести в task.out минимально необходимое число обменов пар значений 
для упорядочивания последовательности по неубыванию.*/

#include <stdio.h>

int main() {
    char c;
    int zero = 0;
    int one = 0;
    int exchange = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( ; fscanf(in, "%c", &c) == 1; ) {
        if ( c == '0' ) {
            zero += 1;
        } else {
            one += 1;
        }
    }
    fclose(in);
    in = fopen("task.in", "r");
    for ( int i = 0; i < zero; i++ ) {
        fscanf(in, "%c", &c);
        if ( c != '0' ) {
            exchange += 1;
        }
    }
    fclose(in);
    fprintf(out, "%d\n", exchange);
    fclose(out);
    
    return 0;
}
