#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> P;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n, m;
    cin >> n >> m;
    vector<P> A(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        A[i] = {a, -b};
    }

    sort(A.begin(), A.end());

    long long cnt = 0, d = 0;
    for(int i = 0; i < n; i++){
        P p = A[i];
        if(cnt + (-1 * p.second) >= m){
            d += (m - cnt) * p.first;
            break;
        }else{
            cnt += -p.second;
            d += p.first * -p.second;
        }
    }

    cout << d << endl;

    return 0;
}