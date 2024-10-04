#include <stdio.h>
int main() {
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long int totalKatryoshka = a;
    if (a == 0)
    {
        printf("%lld", totalKatryoshka);
    } else {
        char whichOneIsMin = 'a';
        if (totalKatryoshka > b)
        {
            whichOneIsMin = 'b';
            totalKatryoshka = b;
        }
        if (totalKatryoshka > c)
        {
            whichOneIsMin = 'c';
            totalKatryoshka = c;
        }

        if (whichOneIsMin == 'a')
        {
            totalKatryoshka = a;
            b = b - a;
            c = c - a;
            a = 0;
        }
        if (whichOneIsMin == 'b')
        {
            c = c - b;
            a = a - b;
            b = 0;
        }
        if (whichOneIsMin == 'c')
        {
            b = b - c;
            a = a - c;
            c = 0;
        }
        
        if (a == 0)
        {
            printf("%lld", totalKatryoshka);
        } else if (c == 0) {
            printf("%lld", totalKatryoshka);
        } else {
           
            if (a / 2 <= c)
            {
                totalKatryoshka = totalKatryoshka + (a / 2);
            } else {
                totalKatryoshka = totalKatryoshka + c;
            }
            printf("%lld", totalKatryoshka);
        }
    }

    return 0;
}