#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    set<int> st;
    st.insert(0);
    for(int i = 0; i < n; i++){
        auto tmp = st;
        for(auto x : tmp){
            st.insert(x + A[i]);
        }
    }

    cout << st.size() << endl;
    
    return 0;
}