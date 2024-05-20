#include<stdio.h>
#include<string.h>
int main() 
{
    int s[1000];
    int t[1000];
    gets(s);
    gets(t);
    int sLen = strlen(s);
    int tLen = strlen(t);
    printf("%d %d\n%s %s", sLen, tLen, s, t);
    return 0;
}