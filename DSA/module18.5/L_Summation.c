#include <stdio.h>
long long int recurssion(int arr[], int n, int i) {
    if (i == n ) return 0;
    long long int sum = recurssion(arr, n, i+1);
    return sum + arr[i];

}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int summation = recurssion(arr, n, 0);
    printf("%lld", summation);
    return 0;
}