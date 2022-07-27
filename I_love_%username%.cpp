#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    cin >> a[0];
    int M = a[0], m = a[0], res = 0;
    for(int i = 1; i < n; i++) {
        cin >> a[i];
        if(M < a[i]) {
            res++;
            M = a[i];
        }
        if(m > a[i]) {
            res++;
            m = a[i];
        }
    }
    cout << res;
    delete[] a;
    return 0;
}