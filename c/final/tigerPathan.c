#include <stdio.h>
int main() {
    int testCase;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        int pathanPoint = 0;
        int tigerPoint = 0;
        int round;
        scanf("%d", &round);
        char gamePoint[round+1];
        scanf("%s", gamePoint);
        for (int j = 0; j < round; j++)
        {
            if (gamePoint[j] == 'T')
            {
                tigerPoint++;
            } else {
                pathanPoint++;
            }
        }
        if (tigerPoint > pathanPoint)
        {
            printf("Tiger\n");
        } else if (pathanPoint > tigerPoint)
        {
             printf("Pathaan\n");
        } else {
             printf("Draw\n");
        }
    }
    return 0;
}