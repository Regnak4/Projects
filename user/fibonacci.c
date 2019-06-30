/*int fibonacci(int n)
Использовать рекурсию.*/
#include <stdio.h>

int fibonacci(int n) {
    if ( n == 0 ) {
        return 0;
    }
    if ( n == 1 || n == -1 ) {
        return 1;
    }
    if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

	printf("%d\n", fibonacci(-1));
	printf("%d\n", fibonacci(0));
	printf("%d\n", fibonacci(1));
	printf("%d\n", fibonacci(5));
	printf("%d\n", fibonacci(9));

	return 0;
}