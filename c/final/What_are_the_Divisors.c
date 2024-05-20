#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int half = n/2;
    for (int i = 1; i <= half; i++)
    {
        if (n%i == 0)
        {
            printf("%d ", i);
        }
        
    }
    printf("%d", n);
    return 0; 
}