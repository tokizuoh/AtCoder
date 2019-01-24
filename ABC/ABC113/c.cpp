#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    map<int, vector<int>> mp;
    map<pair<int, int>, string> ansmp;

    vector<pair<int, int>> Tmp(n);

    for(int i = 0; i < m; i++){
        int p, y;
        cin >> p >> y;
        mp[p].push_back(y);
        ansmp[{p, y}] = "";
        Tmp[i] = {p, y};
    }

    for(auto &x : mp){
        sort(x.second.begin(), x.second.end());
    }

    // --**--確認用--
    /*
    for(auto x : mp){
        cout << x.first << '|';
        for(auto y : x.second){
            cout << y << ' ';
        }
        cout << endl;
    }
    */
    // -----**------

    for(auto x : mp){
        string ans = "";
        for(int i = 0; i < 6 - to_string(x.first).size(); i++){
            ans += '0';
        }
        ans += to_string(x.first);
        for(int i = 0; i < x.second.size(); i++){
            string t = ans;
            for(int j = 0; j < 6 - to_string(i + 1).size(); j++){
                t += '0';
            }
            t += to_string(i + 1);
            ansmp[{x.first, x.second[i]}] = t;
        }
    }

    for(int i = 0; i < m; i++){
        cout << ansmp[{Tmp[i].first, Tmp[i].second}] << endl;
    }


    return 0;
}