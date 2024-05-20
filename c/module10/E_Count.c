#include<stdio.h>
#include<string.h>
int main() 
{
    char s[1000001];
    scanf("%s", s);
    int summation = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        summation += s[i] - '0';
    }
    printf("%d", summation);
    return 0;
}