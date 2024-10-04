#include <stdio.h>
int my_len(char x[]) {
    int len = 0;
    for (int i = 0; x[i] != '\0'; i++)
    {
        len++;
    }
    
    return len;
}
int main() {
    char x[100];
    scanf("%s", x);
    printf("%d", my_len(x));
    return 0;
}