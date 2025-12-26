#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> s1 ;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        string s;
        cin>>s;
        s1.push_back(s);
    }
    unordered_map<string , vector<string>> str;
    for (string s2 : s1) {
        transform(s2.begin(),s2.end(),s2.begin() ,::tolower);
        string k = s2;
        sort(k.begin(),k.end());
        str[k].push_back(s2);
    }
    for (auto &iti : str) {
        for (string &s : iti.second) {
            cout<<s<<endl;
        }
        cout<<endl;

    }

}