#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int minValue = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int sum = arr[i] + arr[j] + j - i;
                minValue = min(sum, minValue);
            }
        }
        cout << minValue << endl; 
    }
    return 0;
}