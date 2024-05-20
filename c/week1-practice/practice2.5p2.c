#include <stdio.h>
int main() {
    int number1;
    int number2;
    scanf("%d%d", &number1, &number2);
    int sum = number1 + number2;
    printf("%d + %d = %d\n", number1, number2, sum);
    
    int diff = number1 - number2;
    printf("%d - %d = %d\n", number1, number2, diff);

    int multi = number1 * number2;
    printf("%d * %d = %d\n", number1, number2, multi);
    
    float division = (float)number1 / number2;
    printf("%d / %d = %.2f", number1, number2, division);
    return 0;
}