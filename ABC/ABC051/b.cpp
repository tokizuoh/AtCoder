#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int K, S;
    cin >> K >> S;

    int ans = 0;
    for(int i = 0; i <= K; i++){
        for(int j = 0; j <= K; j++){
            int f = S - i - j;
            if(0 <= f and f <= K){
                ans++;
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}