// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);

//     return 0;
// }
#include <stdio.h>
int main()
{

    int ary[4] = {1, 2, 3, 4};

    int *p;

    p = ary + 3;
    printf("%d\n", *p);


    *p = 5;

    printf("%d\n", ary[3]);

}