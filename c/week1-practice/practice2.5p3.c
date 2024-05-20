#include <stdio.h>
int main() {
    int input;
    scanf("%d", &input);
    if (input%2 == 0)
    {
        printf("even");
    } else {
        printf("odd");
    }
    return 0;
}