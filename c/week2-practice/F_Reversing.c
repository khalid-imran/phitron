// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     int arr[a];
//     for(int i = 0; i < a; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(int i = a-1; i >= 0; i--) {
//        printf("%d ", arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = size-1; i >= 0; i--) {
        if(i != 0) {
            if(i%2 != 0) {
               printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}