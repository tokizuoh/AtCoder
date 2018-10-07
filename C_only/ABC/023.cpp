#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int R, C, K, N, M = 100010;
    cin >> R >> C >> K >> N;
    
    vector<int> r(M), c(M);
    vector<int> a(M), b(M); //i行目、i列目のアメの個数
    REP(i, N){
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
        a[r[i]]++;
        b[c[i]]++;
    }

    vector<int> x(M), y(M);
    REP(i, R) x[a[i]]++;
    REP(i, C) y[b[i]]++;

    long long cnt = 0;
    REP(i, K + 1){
        cnt += x[i] * y[K - i];
    }

    REP(i, N){
        int sum = a[r[i]] + b[c[i]];
        if(sum == K) cnt--;
        if(sum == K + 1) cnt++;
    }

    cout << max(cnt, 0LL) << endl;

    /*
    map<int, pair<int, int>> X, Y;

    
    REP(i, N){
        int r, c;
        cin >> r >> c;
        X[r].first++;
        X[r].second = max(X[r].second, c);
        Y[c].first++;
        Y[c].second = max(Y[c].second, r);
    }
    */

    /*
    map<int, int> mp1, mp2;
    for(auto x : X){
        if(mp1[x.second.first] == 0){
            mp1[x.second.first] = 1e9;
        }
        if(mp1[x.second.first] > 0){
            mp1[x.second.first] = min(mp1[x.second.first], x.second.second);
        }
    }
    for(auto x : Y){
        if(mp2[x.second.first] == 0){
            mp2[x.second.first] = 1e9;
        }
        if(mp2[x.second.first] > 0){
            mp2[x.second.first] = min(mp2[x.second.first], x.second.second);
        }
    }
    */

    /*
    cout << "-----------------------" << endl;
    for(auto x : mp1){
        cout << x.first << " " << x.second << endl;
    }
    cout << "-----------------------" << endl;
    for(auto x : mp2){
        cout << x.first << " " << x.second << endl;
    }
    */

    /*
    int ans = 1e9;
    for(auto x : mp1){
        if(mp2[K - x.first] > 0){
            ans = min(ans, x.second + mp2[K - x.first]);
        }
    }
    cout << (ans == 1e9 ? 0 : ans) << endl;
    */

    /*
    cout << "--------------------------------------------" << endl;
    for(auto x : X){
        cout << "x : " << x.first << " | col_count : " << x.second.first << " | farthest : " << x.second.second << endl;
    }
    cout << "--------------------------------------------" << endl;
    for(auto x : Y){
        cout << "y : " << x.first << " | raw_count : " << x.second.first << "  | farthest : " << x.second.second << endl;
    }
    */

    return 0;
}