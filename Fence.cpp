#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    long long* dp = new long long[n];
    dp[0] = 0;
    for(int i = 0; i < k; i++)
        dp[0] += a[i];
    int idx = 0;
    for(int i = 1; i <= n-k; i++) {
        dp[i] = dp[i-1]+a[i+k-1]-a[i-1];
        if(dp[i] < dp[idx]) idx = i;
    }
    cout << idx+1;
    delete[] a;
    return 0;
}