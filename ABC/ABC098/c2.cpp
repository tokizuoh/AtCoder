#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> wn(n, 0);
    for(int i = 0; i < n; i++){
        if(s[i] == 'W') wn[i]++;
    }

    // wn[i] iまで西を向いている人数（iを含める）
    for(int i = 1; i < n; i++){
        wn[i] += wn[i - 1];
    }

    int ans = 1e9;
    for(int i = 0; i < n; i++){
        int left = (i > 0 ? wn[i - 1] : 0);
        int right = n - i - 1 - (wn[n - 1] - wn[i]);
        ans = min(ans, left + right);
    }

    cout << ans << endl;

    return 0;
}