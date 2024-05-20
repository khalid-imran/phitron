#include <stdio.h>
void recurssion(int arr[], int n, int i) {
    if (i == n ) return;
    recurssion(arr, n, i+1);
    if (i % 2 == 0)
    {
        if(i+1<n)printf(" ");
        printf("%d", arr[i]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    recurssion(arr, n, 0);
    return 0;
}