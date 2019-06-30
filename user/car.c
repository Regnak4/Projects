#include <stdio.h>

int main() {
    int speed, limit;
    
    scanf("%d%d", &speed, &limit);
    
    if ( speed <= limit ) {
        printf("ok\n");
    } else {
        printf("violation\n");
    }
}
