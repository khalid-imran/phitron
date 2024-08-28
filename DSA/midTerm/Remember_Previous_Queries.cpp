#include<bits/stdc++.h>
using namespace std;
int main() {
    list<int> myList;
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int index;
        int val;
        cin >> index >> val;
        if (index == 1) {
            myList.push_back(val);
        }
        if (index == 0) {
            myList.push_front(val);
        }
        if (index == 2) {
            if (val < myList.size())
            {
                myList.erase(next(myList.begin(), val));
            }
        }
        cout << "L ->";
        for (int value : myList) {
            cout << " " << value;
        }
        cout << endl;
        cout << "R ->";
        for (auto it = myList.rbegin(); it != myList.rend(); ++it) {
            cout << " " << *it;
        }
        cout << endl;
        
    }
    return 0;
}