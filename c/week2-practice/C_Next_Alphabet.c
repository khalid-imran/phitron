#include <stdio.h>
int main() {
    char x;
    scanf("%c", &x);
    if (x == 'z')
    {
        printf("a");
    } 
    else {
        int nextLatter = x + 1;
        printf("%c", nextLatter);
    }
    return 0;
}