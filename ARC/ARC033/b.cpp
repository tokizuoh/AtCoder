#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int na, nb, c = 0;
    cin >> na >> nb;

    set<int> st;
    vector<int> A(na), B(nb);
    for(int i = 0; i < na; i++){
        cin >> A[i];
        st.insert(A[i]);
    }
    for(int i = 0; i < nb; i++){
        cin >> B[i];
        auto itr = st.find(B[i]);
        if(!(itr == st.end())) c++;
    }

    double ans = double(c) / double(na + nb - c);
    cout << fixed << setprecision(6) << ans << endl;

    return 0;
}