/*B файле task.in дана длина последовательности чисел и сама последовательность.
Прочитать последовательность в массив.
Найти все отрицательные числа и заменить их положительными, равными по модулю.
Результирующий массив вывести в task.out.
Пример ввода
10
10 -20 30 40 -50 -60 70 80 90 -100
Пример вывода
10 20 30 40 50 60 70 80 90 100*/

/*#include <stdio.h>

void toAbs(FILE *in, FILE *out, int size) {
    int array[size];
    int last = size - 1;
    
    for ( int loaded = 0; loaded < size && fscanf(in, "%d", &array[loaded]) == 1; loaded++ );
    
    for ( int i = 0; i < last; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
        fprintf(out, "%d ", array[i]);
    }
    if ( array[last] < 0 ) {
        array[last] *= -1;
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    int size;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d", &size);
    toAbs(in, out, size);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
*/
#include <stdio.h>

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

int quantity(FILE *in) {
    int size;

    fscanf(in, "%d", &size);
    return size;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = quantity(in);
    int array[size];
    int total = size - 1;

    for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
    arrayAbs(array, size);
    for ( int i = 0; i < total; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n",array[total]);
    fclose(in);
    fclose(out);
    
    return 0;
}
