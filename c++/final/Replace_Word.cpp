#include<bits/stdc++.h>
using namespace std;
int main() {
    int c;
    cin >> c;
    cin.ignore();
    for (int i = 0; i < c; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string text, replaceText;
        ss>>text;
        ss>>replaceText;
        while(text.find(replaceText) != -1) {
            text.replace(text.find(replaceText), replaceText.size(), "#");
        }
        cout<< text << endl;
    }
    return 0;
}