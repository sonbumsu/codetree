#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);
    
    long long friendly = (N/2 + N/3 + N/5) - (N/6 + N/10 + N/15) + (N/30);
    
    printf("%lld\n", N - friendly);
    
    return 0;
}