#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;

    long long ng = 1, ok = n;
    while(ok - ng > 1){
        long long mid = (ok + ng) / 2;
        long long t = mid * (1 + mid) / 2;
        if(t < n) ng = mid;
        else ok = mid;
    }

    vector<long long> Ans;
    long long k = n;
    for(long long i = ok; i >= 1; i--){
        if(k - i >= 0){
            k -= i;
            Ans.push_back(i);
        }
    }

    sort(Ans.begin(), Ans.end());
    
    for(auto x : Ans){
        cout << x << endl;
    }

    return 0;
}