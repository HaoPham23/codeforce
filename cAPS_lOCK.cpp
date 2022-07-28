#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int flag = true;
    for(int i = 1; s[i]; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            flag = false;
    }
    if(flag) {
        for(int i = 0; s[i]; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i]-'A'+'a';
            else
                s[i] = s[i]-'a'+'A';
        }
    }
    cout << s;
    return 0;
}