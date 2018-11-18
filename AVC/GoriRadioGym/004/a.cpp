#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    set<int> st;
    for(int i = 0; i < 3; i++){
        int a;
        cin >> a;
        st.insert(a);
    }

    cout << st.size() << endl;

    return 0;
}