#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, idx;
    cin >> n;
    vector<int> x(n), y(n), h(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i] >> h[i];
        if(h[i] > 0) idx = i;
    }

    for(int cx = 0; cx <= 100; cx++){
        for(int cy = 0; cy <= 100; cy++){
            int H = h[idx] + abs(x[idx] - cx) + abs(y[idx] - cy);
            bool f = true;
            for(int i = 0; i < n; i++){
                int hi = max(H - abs(x[i] - cx) - abs(y[i] - cy), 0);
                if(hi == h[i]);
                else{f = false; break;}
            }
            if(f){
                cout << cx << ' ' << cy << ' ' << H << endl;
                return 0;
            }
        }
    }


    return 0;
}