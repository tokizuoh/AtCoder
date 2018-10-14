#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    //Aには親子関係を記述
    vector<vector<int>> A(n);
    REP(i, n - 1){
        int b;
        cin >> b;
        A[b - 1].push_back(i + 1);
    }

    //Bには給料を記述
    vector<int> B(n, 1);
    for(int i = n - 1; i >= 0; i--){
        if(A[i].size() > 0){
            int mini = 1e9, maxi = -1e9;
            for(int j = 0; j < A[i].size(); j++){
                mini = min(mini, B[A[i][j]]);
                maxi = max(maxi, B[A[i][j]]);
            }
            B[i] = mini + maxi + 1;
        }
    }

    cout << B[0] << endl;

    return 0;
}