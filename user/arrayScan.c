/*int arrayScan(FILE *in, int array[], int limit)
Считать из файла in не более limit элементов в массив array.
Вернуть количество считанных элементов.*/
#include <stdio.h>

#define SIZE 10

int arrayScan(FILE *in, int array[], int limit) {
    int loaded = 0;
    
    for ( ; loaded < limit && fscanf(in, "%d", &array[loaded]) == 1; loaded++ );
    return loaded;
}

int main() {
    FILE *in = fopen("task.in", "r");

    int array[SIZE];

    printf("%d\n", arrayScan(in, array, SIZE));

	return 0;
}
