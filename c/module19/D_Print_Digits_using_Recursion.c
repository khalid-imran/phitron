#include <stdio.h>
void fun(int a) {
    if (a == 0) return;
    int x = a%10;
    fun(a/10);
    printf("%d ", x);
}
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        printf("\n");
    }
   
    return 0;
}