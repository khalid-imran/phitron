#include <stdio.h>
void recurssion(int n, int i) {
    if (i == n) return;
    recurssion(n, i+1);
    if(i+1<n)printf(" ");
    printf("%d", i+1);
}
int main() {
    int n;
    scanf("%d", &n);
    recurssion(n, 0);
    return 0;
}