#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, d;
    cin >> n >> d;
    vector<string> S(d);
    for(int i = 0; i < d; i++){
        cin >> S[i];
    }

    int ans = 0;
    for(int i = 0; i < d - 1; i++){
        for(int j = i + 1; j < d; j++){
            int cnt = 0;
            for(int k = 0; k < n; k++){
                if(S[i][k] == 'o' or S[j][k] == 'o'){
                    cnt++;
                }
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans << endl;

    return 0;
}