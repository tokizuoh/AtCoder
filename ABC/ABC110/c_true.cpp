#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, t;
    cin >> s >> t;

    int n = s.size();

    map<char, vector<int>> mp1, mp2;
    REP(i, n){
        mp1[s[i]].push_back(i);
        mp2[t[i]].push_back(i);
    }

    int a, b;
    a = mp1.size();
    b = mp2.size();

    if(a != b){
        cout << "No" << endl;
        return 0;
    }

    vector<vector<int>> S(a), T(b);
    int idx = 0;
    for(auto x : mp1){
        S[idx] = x.second;
        idx++;
    }
    idx = 0;
    for(auto x : mp2){
        T[idx] = x.second;
        idx++;
    }

    sort(S.begin(), S.end());
    sort(T.begin(), T.end());

    REP(i, a){
        REP(j, S[i].size()){
            if(S[i][j] == T[i][j]) continue;
            else{
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    /* check
    for(auto x : S){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    cout << "------------------" << endl;
    for(auto x : T){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    */

    return 0;
}