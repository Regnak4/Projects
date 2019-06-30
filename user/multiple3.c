#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    a -= a % 3;
    
    for ( int i = 0; i < a; ) {
        printf("%d ", i);
        i += 3;
    }
    printf("%d\n", a);
    
    return 0;
}
