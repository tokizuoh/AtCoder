#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int d;
    cin >> d;

    vector<long long> A(d), B(d);
    for(int i = 0; i < d; i++){
        cin >> A[i];
    }
    for(int i = 0; i < d; i++){
        cin >> B[i];
    }

    long long money = 0, mip = 1e18;
    bool f = false;
    for(int i = 0; i < d; i++){
        money += A[i];
        if(money >= B[i]){
            f = true;
            mip = min(mip, B[i]);
        }
    }

    if(!f){
        cout << -1 << endl;
    }else{
        cout << mip << endl;
    }

    return 0;
}