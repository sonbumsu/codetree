#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    int n;

    scanf("%s", a);
    n = strlen(a);

    a[1] = 'a';
    a[n - 2] = 'a';

    printf("%s", a);
    return 0;
}