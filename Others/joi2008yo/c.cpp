#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, ai = 0, bi = 0, idx, now;
    cin >> n;
    vector<int> A(n), B(n);
    map<int, bool> mp;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        mp[A[i]] = true;
    }
    for(int i = 1; i <= 2 * n; i++){
        if(!mp[i]){
            B[bi] = i;
            bi++;
            if(bi == n) break;
        }
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    vector<bool> ua(n, false), ub(n, false);
    idx = 0, now = A[0], ai = 1, bi = 0;
    ua[0] = true;
    while(true){
        bool f = false;
        if(idx % 2 == 0){
            for(int i = 0; i < n; i++){
                if(!ub[i] and B[i] > now){
                    ub[i] = true;
                    now = B[i];
                    bi++;
                    f = true;
                    break;
                }
            }
            if(!f) now = 0;
            if(bi == n) break;
        }else{
            for(int i = 0; i < n; i++){
                if(!ua[i] and A[i] > now){
                    ua[i] = true;
                    now = A[i];
                    ai++;
                    f = true;
                    break;
                }
            }
            if(!f) now = 0;
            if(ai == n) break;
        }
        idx++;
    }

    int t = 0, h = 0;
    for(int i = 0; i < n; i++){
        t += !ub[i];
        h += !ua[i];
    }

    cout << t << endl;
    cout << h << endl;

    return 0;
}