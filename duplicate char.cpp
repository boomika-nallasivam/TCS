#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    unordered_map<char , int> st;
    for (char c : s) {
        st[c]++;
    }
    for (auto i:st) {
        if (i.second > 1)
            cout << i.second << " " << i.first << endl;
    }
}