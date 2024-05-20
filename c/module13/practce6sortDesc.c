#include <stdio.h>

int main() {
    // Write C code here
    int n[] = {2, 10, 5, 3, 9};
    for(int i = 0; i < 5 - 1; i++) {
        for (int j = i+1; j < 5 ; j++) {
            if (n[i] < n[j])
            {
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", n[i]);
    }
    
    return 0;
}