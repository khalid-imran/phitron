#include<stdio.h>
#include<string.h>
int main() 
{
    int testCase;
    scanf("%d", &testCase);
    char s[10001];
    for (int i = 0; i < testCase; i++)
    {
        scanf("%s", s);
        int small = 0;
        int capital = 0;
        int digit = 0;
        for (int i = 0; i <  strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            } else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            } else {
                digit ++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}