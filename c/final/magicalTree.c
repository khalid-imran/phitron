#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int line = (n+1)/2 + 5;
    int star = 1;
    int space = line - 1;
    for (int i = 0; i < line; i++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        for (int t = 0; t < star; t++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    space = ((line*2)-1-n)/2;
    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}