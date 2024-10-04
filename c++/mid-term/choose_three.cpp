#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        int  size, sum;
        cin >> size >> sum;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if(arr[i] + arr[j] + arr[k] == sum) {
                    flag = 1;
                }
            }
            
        }
        }
        if(flag == 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}