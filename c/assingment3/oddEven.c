#include <stdio.h>
void odd_even(void) {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int oddCount = 0;
    int evenCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2 == 0)
        {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("%d %d", evenCount, oddCount);
}
int main() {
    odd_even();
    return 0;
}