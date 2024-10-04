#include<stdio.h>
#include<string.h>
int main() 
{
    int testCase;
    scanf("%d", &testCase);
    char s[101];
    //  fgets(s, 101, stdin);
    // printf("%d", strlen(s));
    // return 0;
    for (int i = 0; i < testCase; i++)
    {
        scanf("%s", s);
        // printf("%d", strlen(s));
        //   return 0;
        if (strlen(s) <= 10)
        {
            printf("%s\n", s);
        } else {
            printf("%c", s[0]);
            printf("%d", strlen(s) - 2);
            printf("%c", s[strlen(s) - 1]);
            printf("\n");
        } 
    }   
    return 0;
}