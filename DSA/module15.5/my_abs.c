#include <stdio.h>
int my_abs(int x) {
    if (x < 0)
    {
        return  x * -1;
    }
    return x;
}
int main() {
    int x;
    scanf("%d", &x);
    printf("%d", my_abs(x));
    return 0;
}