#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long h, w;
    int n;
    cin >> h >> w >> n;

    vector<P> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i].first >> A[i].second;
    }

    long long ans = (h - 1) * w + (w - 1) * h;

    for(int i = 0; i < n; i++){
        int ix, iy;
        ix = A[i].first;
        iy = A[i].second;
        if((ix == 1 and iy == 1) or (ix == h and iy == 1) or (ix == 1 and iy == w) or (ix == h and iy == w)){
            ans -= 2;
            if(h == 1 or w == 1) ans++;
            continue;
        }else if(ix == 1 or ix == h or iy == 1 or iy == w){
            ans -= 3;
            if(h == 1 or w == 1) ans++;
            continue;
        }else{
            ans -= 4;
        }
    }

    vector<bool> F(n, false);
    for(int i = 0; i < n; i++){
        int ix, iy;
        ix = A[i].first;
        iy = A[i].second;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            int jx, jy;
            jx = A[j].first;
            jy = A[j].second;
            if((ix - 1 == jx and iy == jy) or (ix + 1 == jx and iy == jy) or (ix == jx and iy + 1 == jy) or (ix == jx and iy - 1 == jy)){
                if(!F[j]) ans++;
            }
        }
        F[i] = true;
    }

    cout << ans << endl;

    return 0;
}