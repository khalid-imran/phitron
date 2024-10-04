#include <stdio.h>
void reccursion(int a[][1000000], int b[][1000000], int c[][1000000], int n, int m, int i, int j) {
    if (i ==  n- 1 && j == m - 1) return 0;
    c[i][j] = a[i][j] + b[i][j];
    if (j == m-1)
    {
         reccursion(a, b, c, n, m, i+1, 0);
    } else {
         reccursion(a, b, c, n, m, 0, i+1);
    }
} 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int b[n][m];
    int c[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    reccursion(a, b, c, n, m, 0, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         c[i][j] = a[i][j] + b[i][j];
    //     }
    // }

    return 0;
}