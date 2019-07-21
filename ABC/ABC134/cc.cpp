#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    map<int, int> mp;

    int ma = 0;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        mp[A[i]]++;
        ma = max(ma, A[i]);
    }
    
    int sm = 0;
    for(auto x : mp){
        if(x.first != ma){
            sm = max(sm, x.first);
        }
    }

    for(int i = 0; i < n; i++){
        if(A[i] == ma){
            if(mp[A[i]] > 1){
                cout << A[i] << endl;
            }else{
                cout << sm << endl;
            }
        }else{
            cout << ma << endl;
        }
    }


    return 0;
}