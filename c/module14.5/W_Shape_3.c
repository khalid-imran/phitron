#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    int k = 1;
    int s = n-1;
    for (int i = 0; i < n+n; i++)
    {
        for (int j = s; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = k; j > 0; j--)
        {
            printf("*");
        }
        if (i > n-1)
        {
            k -=2;
            s++;
        } else if (i < n-1)
        {
            k +=2;
            s--;
        }
        printf("\n");
    }
    
}