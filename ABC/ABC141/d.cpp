#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    priority_queue<int> pq;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        pq.push(a);
    }

    int idx = 0;
    while(idx < m){
        int a = pq.top();
        pq.pop();

        a /= 2;
        pq.push(a);

        idx++;
    }

    long long ans = 0;
    while(!pq.empty()){
        ans += (long long)pq.top();
        pq.pop();
    }

    cout << ans << endl;
    
    return 0;
}