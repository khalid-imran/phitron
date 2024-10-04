#include <stdio.h>

int main() {
    // Write C code here
    int n, k, s;
    scanf("%d", &n);
    k = 0;
    s = n;
    for(int i = 0; i <= n; i++) {
        for (int j = 0; j < k; j++) {
            printf(" ");
        }
        for (int j = s; j > 0; j--) {
            printf("*");
        }
        k++;
        s -= 2;
        printf("\n");
    }
    return 0;
}