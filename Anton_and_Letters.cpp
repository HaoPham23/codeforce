#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> a;
    for(int i = 0; s[i]; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            a.insert(s[i]);
    }
    cout << a.size();
    return 0;
}