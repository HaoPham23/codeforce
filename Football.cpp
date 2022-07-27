#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 1;
    for(int i = 1; s[i]; i++) {
        if(s[i] == s[i-1]) {
            cnt++;
            if(cnt >= 7) {
                cout << "YES";
                return 0;
            }
        }
        else {
            cnt = 1;
        }
    }
    cout << "NO";
    return 0;
}