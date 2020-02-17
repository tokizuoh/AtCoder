#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    bool f = true;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(A[i] % 2 == 0){
            if(A[i] % 3 == 0 or A[i] % 5 == 0);
            else f = false;
        }
    }

    if(f) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;

    return 0;
}