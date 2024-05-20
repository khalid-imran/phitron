#include<stdio.h>
#include<string.h>
int main() 
{
    char s[100001];
    scanf("%s", s);
    int consonantCount = 0;
    for (int i = 0; i <  strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            consonantCount++;
        }
        
    }
    printf("%d", consonantCount);
    return 0;
}