#include <stdio.h>
void sum(int x) {
    for (int i = 1; i <= x; i++)
    {
         printf("%d", i);
         if (i < x)
         {
            printf(" ");
         }
         
    }

}
int main() {
    int x;
    scanf("%d", &x);
    sum(x);
    return 0;
}