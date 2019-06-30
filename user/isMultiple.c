#include <stdio.h>

int main () {
    int mult, div;

    scanf("%d %d", &mult, &div);

    if ( mult % div == 0 ) {
        printf("yes\n");
    } else {
    	printf("no\n");
    }
	return 0;
}