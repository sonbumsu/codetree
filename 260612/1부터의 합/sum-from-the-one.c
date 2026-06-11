#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        sum += i;
        
        if (sum >= N) {
            printf("%d\n", i);
            return 0; 
        }
    }

    return 0;
}