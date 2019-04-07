#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    n = 5;

    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int k;
    cin >> k;

    bool f = true;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(A[j] - A[i] <= k) continue;
            else{
                f = false;
                break;
            }
        }
    }

    if(f) cout << "Yay!" << endl;
    else cout << ":(" << endl;

    return 0;
}