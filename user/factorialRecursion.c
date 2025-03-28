/*int factorial(int n)
Использовать рекурсию.
В случае неопределенности возвращать -1.*/
#include <stdio.h>

int factorial(int n) {
    if ( n <= 1 ) {
        if ( n < 0 ) {
            return -1;
        }
        return 1;
    }
    return factorial(n-1) * n;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", factorial(n));

	return 0;
}
