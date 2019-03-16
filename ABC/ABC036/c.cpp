#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        mp[A[i]]++;
    }

    int idx = 0;
    for(auto &x : mp){
        x.second = idx;
        idx++;
    }

    for(int i = 0; i < n; i++){
        cout << mp[A[i]] << endl;
    }

    return 0;
}