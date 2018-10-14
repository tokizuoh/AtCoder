#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int total[n] = {};
    
    total[0] = (s[0] == 'E');
    for(int i = 1; i < n; i++){
        total[i] += (s[i] == 'E') + total[i - 1];
    }

    int ans = 1e9;
    for(int i = 0; i < n; i++){
        if(i > 0){
            ans = min(ans, total[n - 1] - total[i] + (i - total[i - 1]));
        }else{
            ans = min(ans, total[n - 1] - total[i]);
        }
    }

    cout << ans << endl;

    return 0;
}