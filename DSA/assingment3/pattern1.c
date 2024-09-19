#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int c = 1;
    int space = n-1;
    for (int i = 0; i < n*2; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= c; j++)
        {
            if(i%2 == 0) {
                printf("#");
            } else {
                printf("-");
            } 
        }
        
        printf("\n");
        if (i >= n - 1)
        {
            c -= 2;
            space++;
        } else {
            c += 2;
            space--;
        }
    }
    
}