#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n;
    map<int, int> X;
    vector<int> A(m);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        X[i] = x;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> A[i];
        A[i]--;
    }

    for(int i = 0; i < m; i++){
        int now = X[A[i]];
        if(now == 2019) continue;
        
        bool f = true;
        for(auto y : X){
            if(now + 1 == y.second){
                f = false;
                break;
            }
        }
        if(f) X[A[i]]++;
    }

    for(auto y : X){
        cout << y.second << endl;
    }

    return 0;
}