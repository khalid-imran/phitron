#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int i = 1;
    while ( i <= x )
    {
        if (x%i == 0)
        {
            printf("%d\n", i);
        }
        
        i++;
    }
    return 0;
}