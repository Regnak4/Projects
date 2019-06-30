/*Условие задачи
Считать из task.in строку не более 1000 символов, содержащую неотрицательные целые числа 
и знаки арифметических операций между ними: + - * /.
Количество арифметических действий в выражении не превышает 100.
Вычислить значение выражения и вывести его в task.out в формате %g.

Пример ввода
1+2*3/4
Пример вывода
2.5*/

#include <stdio.h>

#define SIZE 1000
#define LIMIT 100

void calc(FILE *in, FILE *out) {
    int loaded = SIZE;
	char array[loaded];
	double result;
    
    for ( loaded = 0; loaded < SIZE && fscanf(in, "%c", &array[loaded]) == 1; loaded++ );
    
    for ( int i = 0; i < LIMIT; i++ ) {
        double tmp = array[i-1];

    	if ( array[i] == '*' ) {
            tmp *= array[i+1];
    	}
    	if ( array[i] == '/' ) {
            tmp /= array[i+1];
    	}
    	result = tmp;
    }
    
    for ( int i = 0; i < LIMIT; i++ ) {
        if ( array[i] == '+' ) {
            result += array[i+1];
    	}
    	if ( array[i] == '-' ) {
            result += array[i+1];
    	}
    }
    
    for ( int i = 0; i < loaded; i++ ) {
    	printf("%c\n", array[i]);
    }
    printf("%g\n", result);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    calc(in, out);+
    
    fclose(in);
    fclose(out);
    
    return 0;
}
