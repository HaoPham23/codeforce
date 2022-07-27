#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    for(int i = 1; s[i]; i++) {
        if(s[i] == 'G' && s[i-1] == 'B') {
            swap(s[i], s[i-1]);
            i++;
        }
    }
    return s;
}

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for(int i = 0; i < t; i++) {
        s = solve(s);
    }
    cout << s;
    return 0;
}