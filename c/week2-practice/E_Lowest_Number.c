#include <stdio.h>
#include <limits.h>
int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int minValue = INT_MAX; 
    int position;
    for(int i = 0; i < a; i++) {
       if (arr[i] < minValue)
       {
         minValue = arr[i];
       }
    } 
    for(int i = 0; i < a; i++) {
       if (arr[i] == minValue)
       {
          position = i+1;
          break;
       }
    } 
    printf("%d %d", minValue, position);
    return 0;
}