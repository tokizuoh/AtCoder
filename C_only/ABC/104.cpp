#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int d, g;
    cin >> d >> g;
    vector<pair<int, int>> P(d);
    REP(i, d){
        cin >> P[i].first >> P[i].second;
    }

    return 0;
}