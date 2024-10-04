#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int i, j;
    int k = n;
    for(i = 0; i <= n; i++) {
        for (j = k; j >= 0; j--) {
            printf("*");
        }
        k--;
        printf("\n");
    }
    return 0;
}