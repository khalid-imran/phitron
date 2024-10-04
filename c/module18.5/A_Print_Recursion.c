#include <stdio.h>
void recurssion(int n, int i) {
    if (i == n) return;
    printf("I love Recursion\n");
    recurssion(n, i+1);
}
int main() {
    int n;
    scanf("%d", &n);
    recurssion(n, 0);
    return 0;
}