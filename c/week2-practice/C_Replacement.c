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
       if (arr[i] < 0)
       {
        arr[i] = 2;
       } 
       else if (arr[i] > 0) {
        arr[i] = 1;
       }
       printf("%d ", arr[i]);
    }
    return 0;
}