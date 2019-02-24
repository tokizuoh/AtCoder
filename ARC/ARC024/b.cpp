#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    set<int> st;
    
    for(int i = 0; i < n; i++){
        cin >> A[i];
        st.insert(A[i]);
    }

    if(st.size() == 1){
        cout << -1 << endl;
        return 0;
    }

    int bef, cnt = 1, maxi = -1e9;
    for(int i = 0; i < n * 2; i++){
        if(i > 0){
            if(bef == A[i % n]){
                cnt++;
            }else{
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }
        bef = A[i % n];
    }
    maxi = max(maxi, cnt);

    cout << (maxi + 1) / 2 << endl;

    return 0;
}