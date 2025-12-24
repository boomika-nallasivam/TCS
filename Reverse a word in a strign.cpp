#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);

    string word;
    string arr[100];   // array to store words
    int n = 0;

    stringstream ss(s);
    while (ss >> word) {
        arr[n++] = word;
    }

    // Print words
    for (int i = 0; i < n; i++) {
        reverse(arr[i].begin() , arr[i].end());
        cout << arr[i] << endl;
    }

    stringstream s1(s);
    cout << s1.str() << endl;
}