#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;


    map<pair<string, int>, int> mp;
    vector<pair<string, int>> A(n);
    for(int i = 0; i < n; i++){
        string s;
        int a;
        cin >> s >> a;
        mp[{s, -a}] = i + 1;
        A[i] = {s, -a};
    }

    for(auto x : mp){
        cout << x.second << endl;
    }

    return 0;
}