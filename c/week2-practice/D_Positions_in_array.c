#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a; i++) {
       if (arr[i] <= 10)
       {
         printf("A[%d] = %d\n", i, arr[i]);
       }
    }
    return 0;
}