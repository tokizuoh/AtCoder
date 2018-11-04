#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long N, K;
    cin >> N >> K;
    vector<long long> a(N), b(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    for(int i = 0; i < N; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ok = 0, ng = 1LL << 60, mid;
    while(ng - ok > 1){
        mid = (ok + ng) / 2;
        long long cnt = 0;
        int idx = 0;
        for(int i = 0; i < N; i++){
            while(idx < N && a[i] * b[idx] < mid){
                idx++;
            }
            cnt += idx;
        }
        if(cnt < K) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;

    return 0;
}