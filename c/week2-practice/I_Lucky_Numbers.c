#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int lastDigit = a % 10;
    int firstDigit = a / 10;
    if (lastDigit % firstDigit == 0 || firstDigit % lastDigit == 0)
    {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}