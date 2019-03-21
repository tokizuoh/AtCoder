#include <bits/stdc++.h>
using namespace std;

long long n, a, b;
vector<long long> H(100010);

bool binary_search(long long x){
    long long t = 0;
    for(int i = 0; i < n; i++){
        if(H[i] - b * x > 0){
            t += (H[i] - b * x + a - b - 1) / (a - b);
        }
    }
    if(t <= x) return true;
    else return false;
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> a >> b;
    for(int i = 0; i < n; i++){
        cin >> H[i];
    }

    long long ng = 0, ok = 1e9, mid;
    while(ok - ng > 1){
        mid = (ok + ng) / 2;
        if(binary_search(mid)){
            ok = mid;
        }else{
            ng = mid;
        }
    }

    cout << ok << endl;

    return 0;
}