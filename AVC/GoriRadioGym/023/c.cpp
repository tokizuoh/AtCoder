#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, total = 0;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        total += A[i];
    }

    if(total % 10){
        cout << total << endl;
        return 0;
    }else{
        sort(A.begin(), A.end());
        for(int i = 0; i < n; i++){
            if((total - A[i]) % 10){
                cout << total - A[i] << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;

    return 0;
}