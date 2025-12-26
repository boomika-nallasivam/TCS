#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1 , s2;
    cin>>s1>>s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    sort(s1.begin(), s1.end());
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    sort(s2.begin(), s2.end());

    if (s1 == s2)
        cout<<"YES"<<endl;
    else

        cout<<"NO"<<endl;
    return 0;

}