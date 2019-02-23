#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n + 1);
    for(int i = 0; i < n; i++){
        cin >> A[i + 1];
    }

    vector<int> B(n + 2, 1e9);
    B[0] = 0;

    queue<P> q;
    q.push({0, 0});
    
    int mini = 1e9;
    while(!q.empty()){
        P p = q.front();
        q.pop();
        int now = p.first;
        int cost = p.second;
        for(int i = 1; i <= n + 1; i++){
            if(now + i >= n + 1){
                mini = min(mini, max(cost, i));
            }else{
                if(A[now + i] == 0 and B[now + i] > max(cost, i)){
                    q.push({now + i, max(cost, i)});
                    B[now + i] = max(cost, i);
                }
            }
        }
    }

    cout << mini << endl;

    return 0;
}