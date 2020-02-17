#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }

    vector<pair<int, string>> A;
    int maxi = 0;
    for(auto x : mp){
        A.push_back({x.second, x.first});
        maxi = max(maxi, x.second);
    }

    sort(A.begin(), A.end());

    // cout << "#" << endl;
    vector<string> Ans;
    for(int i = (int)A.size() - 1; i >= 0; i--){
        if(maxi == A[i].first) Ans.push_back(A[i].second);
    }

    sort(Ans.begin(), Ans.end());

    // cout << "@" << endl;
    for(auto x : Ans){
        cout << x << endl;
    }

    return 0;
}