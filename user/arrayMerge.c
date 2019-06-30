/*Условие задачи
Написать функцию
void arrayMerge(int target[], int src1[], int len1, int src2[], int len2)
Массивы src1[] и src2[] (длиной len1 и len2 соответственно) отсортированы по неубыванию.
Произвести слияние этих массивов в массив target[], также отсортированный по неубыванию.
В случае равенства предпочтение отдаётся элементам из первого массива.
Требуемая сложность: O(N)*/

#include <stdio.h>

#define LIMIT 101

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int targetIndex, len1Index, len2Index;
    
    for ( len1Index = 0, len2Index = 0, targetIndex = 0; len1Index < len1 && len2Index < len2; targetIndex++ ) {
        if ( src1[len1Index] <= src2[len2Index] ) {
            target[targetIndex] = src1[len1Index];
            len1Index += 1;
        } else {
            target[targetIndex] = src2[len2Index];
            len2Index += 1;
        }
    }
    for ( ; len1Index < len1; targetIndex++ ) {
        target[targetIndex] = src1[len1Index];
        len1Index += 1;
    }
    for ( ; len2Index < len2; targetIndex++ ) {
        target[targetIndex] = src2[len2Index];
        len2Index += 1;
    }
}

int main() {
    int len1 = 5;
    int len2 = 5;
    int len3 = len1 + len2;
    int src1[5] = { 1, 3, 5, 7, 9};
    int src2[5] = { 2, 4, 6, 8, 10};
    int target[len3];

    arrayMerge(target, src1, len1, src2, len2);
    for ( int i = 0; i < len3; i++ ) {
        printf("%d ", target[i]);
    }
    printf("\n");
    
    return 0;
}
