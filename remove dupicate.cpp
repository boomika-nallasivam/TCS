#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;

    unordered_map<char , int> st;

    for (char c : s) {
        st[c]++;
    }
    int m = 0 ;
    char n=0;
    for (auto i : st) {
         if (m < i.second) {
             m=i.second;
             n = i.first;
         }

    }
    cout << m << " " << n << endl;

}