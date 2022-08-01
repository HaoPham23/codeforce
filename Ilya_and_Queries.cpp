#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int q, l, r;
    cin >> q;
    int dp[100001];
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i-1]) dp[i] = dp[i-1]+1;
        else dp[i] = dp[i-1];
    }
    while(q--) {
        cin >> l >> r;
        cout << dp[r-1]-dp[l-1]<< endl;
    }
    return 0;
}
