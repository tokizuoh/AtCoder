#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    set<int> st;
    REP(i, n){
        int d;
        cin >> d;
        st.insert(d);
    }

    cout << st.size() << endl;

    return 0;
}