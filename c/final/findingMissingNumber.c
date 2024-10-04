#include <stdio.h>
int main() {
    int testCase;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        long long int multiplication;
        int a, b, c;
        long long int d;
        scanf("%lld %d %d %d", &multiplication, &a, &b, &c);
        long long int multiplicationOfThree = a*b*c;
        if (multiplication % multiplicationOfThree == 0) {
            d = multiplication / multiplicationOfThree;
            printf("%lld\n", d);
        } else {
             printf("%d\n", -1);
        }
    }
    return 0;
}