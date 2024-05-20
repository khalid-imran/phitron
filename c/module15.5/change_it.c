#include <stdio.h>
void change_it(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {       
        if (size - 1 == i)
        {
            arr[i] = 100;
        }
    }
}
int main() {
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    change_it(arr, x);
    for (int i = 0; i < x; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}