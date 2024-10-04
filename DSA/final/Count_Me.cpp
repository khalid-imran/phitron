#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  
    for(int i = 0; i < t; i++) {
       string sentence;
       getline(cin, sentence);
       string word;
       stringstream ss(sentence);
       map<string, int> mp;
       pair<string, int> result = {"", 0};
       while (ss >> word)
       {    
            mp[word]++;
            if (mp[word] > result.second) {
                result = {word, mp[word]};
            }
       }
       cout << result.first << " " << result.second << endl;
    }
    return 0;
}