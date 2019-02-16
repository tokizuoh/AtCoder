#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 4;
    vector<int> A(n, 0);
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        A[a]++;
        A[b]++;
    }

    for(int i = 0; i < 4; i++){
        if(A[i] == 3){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}