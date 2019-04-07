#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    vector<int> A(5);
    for(int i = 0; i < 5; i++){
        A[i] = i;
    }
    sort(A.begin(), A.end());

    vector<int> B(5);
    for(int i = 0; i < 5; i++){
        cin >> B[i];
    }

    int ans = 1e9;
    do {
        int now;
        for(int i = 0; i < 5; i++){
            if(i == 0) now = B[A[i]];
            else{
                now = (now + 9) / 10 * 10 + B[A[i]];
            }
        }
        ans = min(ans, now);
    }while(next_permutation(A.begin(), A.end()));

    cout << ans << endl;

    return 0;
}