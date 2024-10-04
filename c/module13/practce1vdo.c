#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int i, j;
    int k = 1;
    for(i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}