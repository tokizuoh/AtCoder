#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string w;
    cin >> w;

    unordered_map<char, int> mp;
    for(int i = 0; i < w.size(); i++){
        mp[w[i]]++;
    }

    for(auto x : mp){
        if(x.second % 2){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}