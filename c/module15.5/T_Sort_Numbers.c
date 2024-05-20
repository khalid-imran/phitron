#include <stdio.h>
#include <limits.h>
void sort(int arr[], int size) {
    int ascArr[size];
    for (int i = 0; i < size; i++)
    {
        ascArr[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
       for (int k = 1; k < size; k++)
       {
          if (ascArr[i] > ascArr[k])
          {
            int temp = ascArr[i];
             ascArr[i] = ascArr[k];
             ascArr[k] = temp;
          }
          
       }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ascArr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

}
int main() {
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, 3);
    return 0;
}