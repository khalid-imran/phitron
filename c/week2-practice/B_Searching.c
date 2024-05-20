#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int ans = -1;
    for(int i = 0; i < a; i++) {
       if (x == arr[i])
       {
        ans = i;
        break;
       }   
    }
    printf("%d", ans);
    return 0;
}