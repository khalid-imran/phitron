#include<stdio.h>
int main() 
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int twoCount = 0;
    int threeCount = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]%2 == 0)
        {
            twoCount++;
            continue;
        }
        if (arr[i]%3 == 0)
        {
            threeCount++;
        } 
    }
     printf("%d %d", twoCount, threeCount);
    return 0;
}