/*
Условие задачи
void strCopy(char target[], char source[])
Гарантируется, что строка target не короче строки source.
*/
#include <stdio.h>

void strCopy(char target[], char source[]) {
    int limit;
    
    for ( limit = 0; source[limit] != 0; limit++ ) {
        target[limit] = source[limit];
    }
    target[limit] = 0;
}


int main() {
    char strIn[100] = { 'A', 'l', 'e', 'x', ' ', 'H', 'e', 'l', 'l', 'o' };
    char strOut[100];

    //scanf("%s", strIn);
    strCopy(strOut, strIn);
    printf("%s\n", strOut);
}
