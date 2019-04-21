#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> B(n + 1, 0), W(n + 1, 0);
    for(int i = 0; i < n; i++){
        B[i + 1] += B[i] + (s[i] == '#');
        W[i + 1] += W[i] + (s[i] == '.');
    }

    int mini = 1e9;
    for(int i = 1; i < n + 1; i++){
        mini = min(mini, B[i - 1] + W[n] - W[i - 1]);
    }

    cout << min(mini, B[n]) << endl;

    return 0;
}