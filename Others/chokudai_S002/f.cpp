#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    set<P> st;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a > b) swap(a, b);
        st.insert({a, b});
    }

    cout << st.size() << endl;


    return 0;
}