#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long res = n/a;
    if(n%a != 0) res++;
    if(m%a != 0)
        res *= (m/a+1);
    else res *= (m/a);
    cout << res;
    return 0;
}