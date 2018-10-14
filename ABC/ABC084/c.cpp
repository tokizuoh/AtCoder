#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> C(n - 1), S(n - 1), F(n - 1);
    REP(i, n - 1) cin >> C[i] >> S[i] >> F[i];

    for(int i = 0; i < n; i++){
        int cost = 0;
        for(int j = i; j < n - 1; j++){
            if(cost < S[j]) cost = S[j];
            else if(cost % F[j] == 0); //駅jの周期F[j]に合致 -> 待ち時間無し
            else cost += F[j] - cost % F[j];
            cost += C[j];
        }
        cout << cost << endl;
    }

    return 0;
}