#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, maxi = -1e9, mini = 1e9;
    cin >> n;

    int A[1000010] = {};
    for(int i = 0; i < n; i++){
        int s, t;
        cin >> s >> t;
        A[s--]++;
        A[t]--;
        maxi = max(maxi, t);
        mini = min(mini, s--);
    }

    int bef = -1, ans = 1;
    for(int i = mini + 1; i < maxi; i++){
        A[i] += A[i - 1]; 
        if(bef != 0 and A[i] == 0){
            ans++;
        }
        bef = A[i];
    }

    /*
    for(int i = 0; i <= maxi; i++){
        cout << A[i] << ' ';
    }
    cout << endl;
    */

    cout << ans << endl;

    return 0;
}