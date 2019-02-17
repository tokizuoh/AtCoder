#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    stack<char> st;
    int n = s.size(), cnt = 0;
    for(int i = 0; i < n; i++){
        if(i > 0 and s[i] == 'T'){
            if(st.size() < 1) continue;
            char tmp = st.top();
            if(tmp == 'S'){
                st.pop();
                cnt++;
                continue;
            }
        }
        st.push(s[i]);
    }

    cout << n - cnt * 2 << endl;

    return 0;
}