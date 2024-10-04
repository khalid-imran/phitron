#include<stdio.h>
#include<limits.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = INT_MIN;
    int min = INT_MAX;
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 0; i < n; i++)
    {
         scanf("%d", &arr[i]);
         if (max < arr[i])
         {
            max = arr[i];
            maxIndex = i;
         }
         if (arr[i] < min)
         {
            min = arr[i];
            minIndex = i;
         }
    }
    arr[maxIndex] = min;
    arr[minIndex] = max;
    for (int i = 0; i < n; i++)
    {
         printf("%d ", arr[i]);
    }

    return 0;
}