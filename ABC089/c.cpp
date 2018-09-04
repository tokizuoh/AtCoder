#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<long long> A(5, 0);
    REP(i, n){
        string s;
        cin >> s;
        if(s[0] == 'M') A[0]++;
        if(s[0] == 'A') A[1]++;
        if(s[0] == 'R') A[2]++;
        if(s[0] == 'C') A[3]++;
        if(s[0] == 'H') A[4]++;
    }

    long long ans = 0;
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 4; j++){
            for(int k = j + 1; k < 5; k++){
                ans += A[i] * A[j] * A[k];
            }
        }
    }

    cout << ans << endl;

    return 0;
}