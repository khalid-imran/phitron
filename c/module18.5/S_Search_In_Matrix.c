#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int x;
    scanf("%d", &x);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if (arr[i][j] == x)
           {
            found = 1;
            break;
           }
            
        }
        if (found == 1)
        {
            break;
        }
        
    }
    if (found == 1)
    {
       printf("will not take number");
    } else {
        printf("will take number");
    }
    return 0;
}