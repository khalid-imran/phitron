#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int i = 1;
    int a;
    int maxValue = 0;
    while ( i <= x )
    {
        scanf("%d", &a);
        if (maxValue < a)
        {
            maxValue = a;
        }
        i++;
    }
    printf("%d", maxValue);
    return 0;
}