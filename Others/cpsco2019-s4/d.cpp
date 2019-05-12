#include <bits/stdc++.h>
using namespace std;

int n, k;
const int N = 200010;
vector<int> A(N);

bool check(int x){
    int bef = A[0];
    int cnt = 1, kc = 0; // k_count
    for(int i = 1; i < n; i++){
        if(bef == A[i]){
            cnt++;
            if(cnt > x){
                kc++;
                bef = -1;
                cnt = 1;
                continue;
            }
        }else{
            cnt = 1;
        }
        bef = A[i];
    }
    return (kc <= k);
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    A.resize(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int ok = n, ng = 0;
    while(ok - ng > 1){
        int mid = (ok + ng) / 2;
        if(check(mid)) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;

    return 0;
}