#include <stdio.h>
// int main() {
//     int A;
//     int B;
//     scanf("%d %d", &A, &B);
//     if (A >= B)
//     {
//         printf("Yes");
//     } 
//     else {
//         printf("No");
//     }
//      return 0;
// }

// int main() {
//     int A;
//     int B;
//     scanf("%d %d", &A, &B);
//     if (A % B == 0 || B % A == 0)
//     {
//         printf("Multiples");
//     } 
//     else {
//         printf("No Multiples");
//     }
//      return 0;
// }
// int main() {
//     char X;
//     scanf("%c", &X);
//     if (X >= 'a' && X <= 'z')
//     {
//         int upperCase = X - 32;
//         printf("%c", upperCase);
//     } 
//     else {
//          int lowerCase = X + 32;
//         printf("%c", lowerCase);
//     }
//      return 0;
// }
// int main() {
//     int X;
//     scanf("%d", &X);
//     int firstDigit = X / 1000;
//     if (firstDigit % 2 == 0)
//     {
//         printf("EVEN");
//     } 
//     else {
//         printf("ODD");
//     }
//      return 0;
// }
// int main() {
//     char X;
//     scanf("%c", &X);
//     if (X >= '0' && X <= '9')
//     {
//         printf("IS DIGIT");
//     } 
//     else {
//         if (X >= 'a' && X <= 'z')
//         {
//             printf("ALPHA\n");
//             printf("IS SMALL");
//         }
//         else {
//             printf("ALPHA\n");
//             printf("IS CAPITAL");
//         }
    
//     }
//      return 0;
// }
int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A <= B && A <= C)
    {
        printf("%d ", A);
    } 
    else if (B <= A && B <= C) 
    {
        printf("%d ", B);
    }
    else {
         printf("%d ", C);
    }

    if (A >= B && A >= C)
    {
        printf("%d\n", A);
    } 
    else if (B >= A && B >= C) 
    {
        printf("%d\n", B);
    }
    else {
         printf("%d\n", C);
    }
     return 0;
}