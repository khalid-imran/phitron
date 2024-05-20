#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    long long int sum = 0;
    for(int i = 0; i < a; i++) {
       sum += arr[i];
    }
    if (sum < 0)
    {
        sum *= -1;
    }
    
    printf("%lld", sum);
    return 0;
}