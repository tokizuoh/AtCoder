#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    char A[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    char B[m][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < n - m + 1; i++){
        for(int j = 0; j < n - m + 1; j++){
            int cnt = 0;
            for(int k = i; k < i + m; k++){
                for(int l = j; l < j + m; l++){
                    if(A[k][l] == B[k - i][l - j]) cnt++;
                }
            }
            if(cnt == m * m){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}