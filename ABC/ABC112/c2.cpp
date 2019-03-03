#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, t;
    cin >> n;
    vector<long long> X(n), Y(n), H(n);
    for(int i = 0; i < n; i++){
        cin >> X[i] >> Y[i] >> H[i];
        if(H[i] > 0) t = i;
    }

    for(long long cx = 0; cx <= 100; cx++){
        for(long long cy = 0; cy <= 100; cy++){
            long long hoge;
            bool f = true;
            hoge = H[t] + abs(X[t] - cx) + abs(Y[t] - cy);
            for(int i = 0; i < n; i++){
                if(H[i] == max(hoge - abs(X[i] - cx) - abs(Y[i] - cy), 0LL));
                else {f = false; break;}
            }
            if(f){
                cout << cx << ' ' << cy << ' ' << hoge << endl;
                return 0;
            }
        }
    }

    return 0;
}