#include <stdio.h>

int main() {
    // Write C code here
    int n[] = {2, 10, 5, 3, 9};
    int x = 8;
    int found = 0;
    for(int i = 0; i < 5 - 1; i++) {
        for (int j = i+1; j < 5 ; j++) {
            if (n[i] + n[j] == x)
            {
                found++;
            }
        }
    }
    if (found > 0)
    {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}