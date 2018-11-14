#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    unordered_map<int, int> mp1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            if(a == 1) mp1[j + 1]++;
        }
    }

    map<int, vector<int>> mp2;
    for(auto x : mp1){
        mp2[x.second].push_back(x.first);
    }

    for(auto &x : mp2){
        sort(x.second.begin(), x.second.end(), greater<int>());
    }

    vector<int> A(m);
    int idx = 0;
    for(auto x : mp2){
        for(auto y : x.second){
            A[idx] = y;
            idx++;
        }
    }

    reverse(A.begin(), A.end());

    idx = 0;
    for(auto x : A){
        if(idx > 0) cout << ' ';
        cout << x;
        idx++;
    }
    cout << endl;
    
    return 0;
}