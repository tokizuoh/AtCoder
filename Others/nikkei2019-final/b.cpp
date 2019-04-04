#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> A(n), B(m);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }

    if(n != m){
        if(n > m) cout << 'Y' << endl;
        else cout << 'X' << endl; 
    }else{
        for(int i = 0; i < n; i++){
            if(A[i] == B[i]) continue;
            else{
                if(A[i] > B[i]) cout << 'Y' << endl;
                else cout << 'X' << endl;
                return 0;
            }
        }
        cout << "Same" << endl;
    }

    return 0;
}