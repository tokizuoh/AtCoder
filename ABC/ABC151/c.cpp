#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    set<int> st;
    map<int, int> mp;
    vector<bool> F(n, false);
    for(int i = 0; i < m; i++){
        int p;
        string s;
        cin >> p >> s;
        if(s == "AC"){
            if(F[p - 1]);
            else{
                F[p - 1] = true;
            }
        }else{
            if(F[p - 1]);
            else{
                mp[p - 1]++;
            }
        }
    }

    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(F[i]) a++;
    }
    for(auto x : mp){
        if(F[x.first]) b += x.second;
    }

    cout << a << ' ' << b << endl;

    return 0;
}