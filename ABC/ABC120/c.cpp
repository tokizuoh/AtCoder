#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    stack<char> st;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(st.size() > 0){
            if(st.top() != s[i]){
                st.pop();
                continue;
            }
        }
        st.push(s[i]);
    }

    cout << n - st.size() << endl;

    return 0;
}