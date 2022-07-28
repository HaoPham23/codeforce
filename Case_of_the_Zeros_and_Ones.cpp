#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    st.push(s[0]);
    for(int i = 1; i < n; i++) {
        if(st.empty()) 
            st.push(s[i]);
        else {
            if(s[i] != st.top()) {
                st.pop();
            }
            else st.push(s[i]);
        }
    }
    cout << st.size();
    return 0;
}