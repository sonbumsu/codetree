#include <stdio.h>
#include <string.h>

int main() {
    char a[30], b[30];
    int c, d;
    scanf("%s %s", a, b);
    c = strlen(a);
    d = strlen(b);

    if (c == d) printf("same");
    else if (c > d) printf("%s %d", a, c);
    else printf("%s %d", b, d);

    return 0;
}