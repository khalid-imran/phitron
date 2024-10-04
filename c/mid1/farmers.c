#include<stdio.h>
int main() 
{
    // int daysNeedComplete = 7 * 1 / 1007;
    // printf("%d", daysNeedComplete);
    // return 0;
    int size;
    scanf("%d", &size);
    int farmer, additionalFarmer, days;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &farmer);
        scanf("%d", &additionalFarmer);
        scanf("%d", &days);
        int totalFarmer = farmer + additionalFarmer;
        int daysNeedComplete = farmer * days / totalFarmer;
        int fewerDays = days - daysNeedComplete;
        printf("%d\n", fewerDays);     
    }
    return 0;
}