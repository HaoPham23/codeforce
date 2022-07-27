#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxidx = 0, minidx = 0;
    int* a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[maxidx] < a[i]) maxidx = i;
        if(a[minidx] >= a[i]) minidx = i;
    }
    if(maxidx > minidx) cout << maxidx+n-1-minidx-1;
    else cout << maxidx+n-1-minidx;
    delete[] a;
    return 0;
}