#include <stdio.h>
int main() {
    // Write C code here
    int n, k, s;
    scanf("%d", &n);
    k = n - 1;
    s = 1;
    for(int i = 0; i < (n*2) - 1; i++) {
        for (int j = 0; j < k; j++) {
            printf(" ");
        }
        for (int j = 0; j < s; j++) {
            printf("*");
        }
        if (i >= n - 1)
        {
           k++;
           s -= 2;
        } else {
            k--;
            s += 2;
        }
        printf("\n");
    }
    return 0;
}