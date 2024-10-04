#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int s = n-1;
    int number = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = number; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        s--;
        number++;
    }

}