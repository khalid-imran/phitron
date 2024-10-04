#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int i = 1;
    int a;
    while (i <= x)
    {
        scanf("%d", &a);
        do
        {
            printf("%d ", a%10);
            a = a/10;
        } while (a != 0);   
        printf("\n");
        i++;
    }
        
    return 0;
}