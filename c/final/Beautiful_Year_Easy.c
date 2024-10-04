#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int isBeautiful = 0;
    for (int i = 0; i < 4; i++)
    {
        int remainFirstDigit = n / 1000; 
        int remainder = n % 1000;
    }
    printf("%d", n);
    return 0; 
}