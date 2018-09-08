#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b, k;
    cin >> a >> b >> k;

    set<int> st;
    for(int i = a; i <= min(a + k - 1, b); i++){
        st.insert(i);
    }
    for(int i = max(b - k + 1, a); i <= b; i++){
        st.insert(i);
    }

    for(auto x : st){
        cout << x << endl;
    }

    return 0;
}