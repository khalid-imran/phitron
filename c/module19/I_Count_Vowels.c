#include <stdio.h>
#include <string.h>
int countVowels(char text[], int size, int i) {
    if (size == i) return 0;
    int count = countVowels(text, size, i+1); 
    if (text[i] >= 'A' && text[i] <= 'Z') {
        text[i] = text[i] + 32;
    }
    if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o'|| text[i] == 'u')
    {
        count++;
    }
    return count;
}
int main() {
    char text[201];
    fgets(text, 200, stdin);
    int textSize = strlen(text);
    int count = countVowels(text,textSize, 0);
    printf("%d", count);
    return 0;
}