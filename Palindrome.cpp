#include <bits/stdc++.h>
using namespace std;
int main () {
    string s ;
    cin >> s;

    string re = s;
    reverse(re.begin(), re.end());
    if (re == s) {
        cout << "yes" << endl;
    }
    else
        cout << "no" << endl;
}