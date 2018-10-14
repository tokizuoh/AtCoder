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

    if(mp1.size() != mp2.size()){
        cout << "No" << endl;
        return 0;
    }

    vector<vector<int>> A, B;
    vector<int> T;
    for(auto x : mp1){
        T.clear();
        for(auto y : x.second){
            T.push_back(y);
        }
        A.push_back(T);
    }
    for(auto x : mp2){
        T.clear();
        for(auto y : x.second){
            T.push_back(y);
        }
        B.push_back(T);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int m = A.size();
    REP(i, m){
        if(A[i].size() == B[i].size()){
            REP(j, int(A[i].size())){
                if(A[i][j] == B[i][j]);
                else{
                    cout << "No" << endl;
                    return 0;
                }
            }
        }else{
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}