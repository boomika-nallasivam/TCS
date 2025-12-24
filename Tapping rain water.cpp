#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int left = 0;
    int right = n-1;
    int lmax = 0;
    int rmax = 0;
    int r = 0;

    while (left < right) {
        lmax = max(lmax, arr[left]);
        rmax = max(rmax, arr[right]);

        if (arr[left] <= arr[right]) {
            r = r+lmax - arr[left];
            left++;
        }
        else {
            r =r + rmax - arr[right];
            right--;
        }
    }
    cout << r << endl;
}