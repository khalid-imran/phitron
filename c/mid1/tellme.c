#include<stdio.h>
int main() 
{
    int testCase;
    scanf("%d", &testCase);
    for (int k = 0; k < testCase; k++)
    {
        int size;
        int x;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &x);
        int found = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == x)
            {
                found++;
            }
        }
        if (found > 0)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}