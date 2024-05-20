#include<stdio.h>
#include<string.h>
int main() 
{
    int n; 
    int k;
    scanf("%d", &n);
    scanf("%d", &k);
    int i;
    for(i = 0; i < n; i++)
    {
        int j;
        for(j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}