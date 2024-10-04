#include <stdio.h>
#include <string.h>
long long int factorialFunc(int n, int i, long long int factorial) {
    if (n == i) return factorial;
    factorial *= n - i;
    return factorialFunc(n, i + 1, factorial);
}
int main() {
    int n;
    scanf("%d", &n);
    long long int count = factorialFunc(n, 0, 1);
    printf("%lld", count);
    return 0;
}