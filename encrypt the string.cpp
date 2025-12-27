#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.length();
        k = k % n;

        string ss = "";
        for (int i = k; i < n; i++) {
            ss += s[i];
        }
        for (int i = 0; i < k; i++) {
            ss += s[i];
        }
        return ss;
    }
};

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    Solution o;
    cout << o.getEncryptedString(s,k);
}
