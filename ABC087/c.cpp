#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<int>> A(2, vector<int>(n + 1, 0));

    for(int i = 0; i < 2; i++){
        for(int j = 1; j < n + 1; j++){
            cin >> A[i][j];
            A[i][j] += A[i][j - 1];
        }
    }

    int maxi = -1e9;
    for(int i = 1; i < n + 1; i++){
        maxi = max(maxi, A[0][i] + A[1][n] - A[1][i - 1]);
    }
    cout << maxi << endl;

    return 0;
}