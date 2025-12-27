#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string s) {
    int result = 0;
    for (int i = 0; i < s.length(); i++) {
        result = result * 26 + (s[i] - 'A' + 1);
    }
    return result;
}

int main() {
    string s;
    cin >> s;   

    cout << titleToNumber(s);

    return 0;
}
