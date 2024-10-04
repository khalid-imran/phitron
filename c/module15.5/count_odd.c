#include <stdio.h>
int count_odd(int arr[], int size) {
  
    int oddElemen = 0;
    for (int i = 0; i < size; i++)
    {       
        if (arr[i] % 2 != 0)
        {
            oddElemen++;
        }
        
    }
    return oddElemen;
}
int main() {
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", count_odd(arr, x));
    return 0;
}