#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int i = 1;
    while ( i <= 12 )
    {
        printf("%d * %d = %d\n", x, i, i*x);
        i++;
    }
    return 0;
}