#include <stdio.h>

int main() {
    int maximum;
    
    scanf("%d", &maximum);
    
    for ( int i = 1; i < maximum; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", maximum);
    
    return 0;
}
