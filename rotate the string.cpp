#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;

    char c = s[0];
    string t = "";
    for (int i = 1; i < s.length(); i++) {
        t+=s[i];
    }
    t+=c;

    cout<<t;
}