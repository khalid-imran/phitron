#include<stdio.h>
int main() {
    int testCase, size;
    scanf("%d", &testCase);
    for (int k = 0; k < testCase; k++)
    {
        scanf("%d", &size);
        int a[size], b[size], c[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                int temp = a[i];
                if (a[i] > a[j])
                {
                    a[i] = a[j];
                    a[j] = temp;
                }
                
            }
        }
        for (int i = 0; i < size; i++)
        {
            int value = a[i] - b[i];
            if (value < 0)
            {
                value = value * -1;
            }
            c[i] = value;
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }
    return 0;
}
