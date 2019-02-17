#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    
    vector<int> A(n, 0);

    int B[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        map<int, int> mp; 
        for(int j = 0; j < n; j++){
            mp[B[j][i]]++;
        }
        for(int j = 0; j < n; j++){
            if(mp[B[j][i]] == 1) A[j] += B[j][i];
        }
    }

    for(int i = 0; i < n; i++){
        cout << A[i] << endl;
    }

    return 0;
}