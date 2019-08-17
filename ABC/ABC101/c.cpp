#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    
    if(n == k){
        cout << 1 << endl;
        return 0;
    }

    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    n--; k--;
    cout << (n + k - 1) / k << endl;

    return 0;
}