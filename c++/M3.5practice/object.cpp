#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    string country;
};
int main() {
    Cricketer* dhoni = new Cricketer();
    dhoni->jersey_no = 5;
    dhoni->country = "Pakistan";
    Cricketer* kohli = new Cricketer();
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;
    delete dhoni;
    cout << kohli->jersey_no << endl;
    return 0;
}