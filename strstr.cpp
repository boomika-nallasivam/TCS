#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;

    string t ;
    cin >> t;
    // string str = "";
    int n = s.length();
    int m = t.length();
    for (int i = 0; i < n-m; i++) {
        int j=0;
        while (j<m && s[i+j] == t[j]) {
            j++;
        }
        if (j==m) {
            cout << i << endl;
        }
    }
    // cout <<  << endl;
}