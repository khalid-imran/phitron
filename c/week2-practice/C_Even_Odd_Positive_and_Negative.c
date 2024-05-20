#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int a;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    for(int i = 1; i <= N; i++) {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
           even++;
        }
        if (a % 2 == 1 || a % 2 == -1)
        {
           odd++;
        }
        if (a > 0)
        {
           positive++;
        }
        
        if (a < 0)
        {
           negative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
}