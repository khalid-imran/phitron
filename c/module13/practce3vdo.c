#include <stdio.h>

int main() {
    // Write C code here
    int n, k;
    scanf("%d", &n);
    k = 1;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d", j+1);
        }
        k++;
        printf("\n");
    }
    return 0;
}