#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    long long H[n];
    set<long long> st;
    for(int i = 0; i < n; i++){
        cin >> H[i];
        st.insert(H[i]);
    }

    if(st.size() == 1){
        cout << H[0] << endl;
        return 0;
    }

    long long ans = 0, bl = 0;
    for(int i = 1; i < n; i++){
        if(H[i - 1] > H[i]){
            ans += H[i - 1] - bl;
            bl = H[i];
        }else if(H[i - 1] < H[i]){
            ans += H[i] - bl;
            bl = H[i];
        }
        //cout << ans << ' ';
    }
    //cout << endl;

    cout << ans << endl;



    return 0;
}