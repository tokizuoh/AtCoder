#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, long long> P;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    vector<P> B(m); // {number, maisuu} = {c, b}
    for(int i = 0; i < m; i++){
        long long b, c;
        cin >> b >> c;
        B[i] = {c, b};
    }

    sort(B.rbegin(), B.rend());

    vector<int> Flag;

    int left = 0, right = n;
    for(int i = 0; i < m; i++){
        P p = B[i];
        long long num, ms;
        num = p.first;
        ms = p.second;

        int l = left, r = n;
        while(true){
            int mid = (l + r) / 2;
        }
    }

    return 0;
}