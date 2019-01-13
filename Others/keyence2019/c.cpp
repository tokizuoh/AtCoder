#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    vector<long long> A(n), B(n);

    vector<long long> C, D;
    for(long long i = 0; i < n; i++){
        cin >> A[i];
    }
    for(long long i = 0; i < n; i++){
        cin >> B[i];
        long long d = B[i] - A[i];
        if(d <= 0){
            C.push_back(d);
        }else if(d > 0){
            D.push_back(d);
        }
    }

    if(D.size() == 0){
        cout << 0 << endl;
        return 0;
    }

    sort(C.begin(), C.end());
    sort(D.begin(), D.end());

    long long ct = 0;
    for(long long i = 0; i < C.size(); i++){
        ct += C[i];
    }

    long long dt = 0;
    for(long long i = 0; i < D.size(); i++){
        dt += D[i];
    }
    
    if(-1 * ct < dt){
        cout << -1 << endl;
        return 0;
    }

    long long ans = D.size(), di = 0;
    for(long long i = 0; i < C.size(); i++){
        ans++;
        while(di < D.size()){
            long long f = D[di] + C[i];
            if(f < 0){
                C[i] += D[di];
                di++;
                if(di == D.size()){
                    cout << ans << endl;
                    return 0;
                }
            }else{
                D[di] += C[i];
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}