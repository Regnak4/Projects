/*Считать в массив последовательность чисел длиной 10 из файла task.in.
Записать его через пробел в файл task.out.

Пример ввода
10 20 30 40 50 60 70 80 90 100
Пример вывода
10 20 30 40 50 60 70 80 90 100*/

#include <stdio.h>

#define SIZE 10

void arrayScan(FILE *in, int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d ", &array[i]);
    }
}

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[SIZE];
    
    arrayScan(in, array, SIZE);
    arrayPrint(out, array, SIZE);
    
    return 0;
}
