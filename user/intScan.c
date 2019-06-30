#include <stdio.h>

int intScan(FILE* in) {
    int number;

    fscanf(in, "%d", number);

    return number;
}

int main() {
    FILE* in = fopen("task.in", "r");

    printf("%d",intScan(in));

	return 0;
}