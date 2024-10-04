#include<stdio.h>
#include<string.h>
int main() 
{
    char s[100001];
    fgets(s, sizeof(s), stdin); // Use fgets to read the entire line
    for (int i = 0; i < strlen(s); i++) {
    
        if (s[i] < 'a') {
            s[i] = s[i] + 32; // Convert uppercase to lowercase
        } else {
            s[i] = s[i] - 32; // Convert lowercase to uppercase
        }
        if (s[i] == ',') {
            s[i] = ' '; // Replace comma with space
        }
    }
    printf("%s", s);
    return 0;
}