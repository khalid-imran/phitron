#include<bits/stdc++.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main() {
    int size;
    cin >> size;
    int arr[size];
    int maxInt = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size -1; i++)
    {
        maxInt = max(maxInt, arr[i]);
    }
    cout << maxInt;
    return 0;
}