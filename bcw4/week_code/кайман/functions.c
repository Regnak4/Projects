#include <stdio.h>

#define TRUE 1

typedef int (*function)(int, int);

int sum(int x, int y) {
    return x + y;
}

int diff(int x, int y) {
    return x - y;
}

int mult(int x, int y) {
    return x * y;
}

typedef enum {
    SUM = 1,
    DIFF,
    MULT
} OPTIONS;

function fabric(OPTIONS option) {
    switch ( option ) {
        case SUM:
            return sum;
        case DIFF:
            return diff;
        case MULT:
            return mult;
        default:
            return mult;
    }
}

int wrapper(function handler, int array[], int size) {
    int result = array[0];

    for ( int i = 1; i < size; i++ ) {
        result = handler(result, array[i]);
    }
    return result;
}

typedef struct {
    int x;
    int y;
    
    function f1;
    function f2;
    function f3;
} Math;

int main() {
    Math math = {sum, diff, mult};

    printf("%d\n", math.f1(5, 10));
    printf("%d\n", math.f2(5, 10));
    printf("%d\n", math.f3(5, 10));

    // while (TRUE) {
    //     int operation;
    //     int x, y;

    //     printf("Choose operation: [1-sum, 2-diff, 3-mult]\n");
    //     scanf("%d", &operation);
    //     printf("\n");
    //     printf("Type two values:\n");
    //     scanf("%d %d", &x, &y);
    //     printf("\n");
    //     printf("Result: %d\n", fabric(operation)(x, y));
    //     printf("\n\n");
    // }


    // function array[3] = {sum, diff, mult};

    // for ( int i = 0; i < 3; i++ ) {
    //     printf("%d\n", array[i](2, 5));
    // } 
    // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // printf("%d\n", wrapper(sum, array, 10));
    // printf("%d\n", wrapper(mult, array, 10));
    // printf("%d\n", wrapper(diff, array, 10));
    return 0;
}
