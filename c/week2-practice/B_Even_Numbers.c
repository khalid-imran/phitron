#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        if (N == 1)
        {
            printf("-1");
        }
        if (i % 2 == 0)
        {
           printf("%d\n", i);
        }
    }
     return 0;
}