#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<int>> par(n);
    for(int i = 1; i < n; i++){
        int b;
        cin >> b;
        b--;
        par[b].push_back(i);
    }

    vector<int> wages(n, 1);
    for(int i = n - 1; i >= 0; i--){
        if(par[i].size() > 0){
            int mini = 1e9, maxi = -1e9;
            for(int j = 0; j < par[i].size(); j++){
                mini = min(mini, wages[par[i][j]]);
                maxi = max(maxi, wages[par[i][j]]);
            }
            wages[i] = mini + maxi + 1;
        }
    }

    cout << wages[0] << endl;

    return 0;
}