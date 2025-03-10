/*Написать функцию:
void strRot13(char str[])
Зашифровать строку по алгоритму ROT13*/

#include <stdio.h>

void strRot13(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( *str >= 'A' && *str <= 'z' ) {
            if ( *str > 'm' ) {
                *str -= 13;
            } else if ( *str < 'N' ) {
                *str += 13;
            } else if ( *str <= 'Z' ) {
                *str -= 13;
            } else if ( *str >= 'a' ) {
                *str += 13;
            }
        }
    }
}

int main() {
    int limit = 100;
    char str[limit];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", str);
    strRot13(str);
    fprintf(out, "%s\n", str);
	
	close(in);
    close(out);
	
    return 0;
}
