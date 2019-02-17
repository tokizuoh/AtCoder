#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;
    int k;
    cin >> k;

    int n = s.size();
    map<string, bool> mp;
    vector<string> T;
    for(char c = 'a'; c <= 'z'; c++){
        for(int i = 0; i < n; i++){
            string tmp = "";
            if(s[i] == c){
                for(int j = i; j < min(i + k, n); j++){
                    tmp += s[j];
                    if(!mp[tmp]){
                        T.push_back(tmp);
                        mp[tmp] = true;
                    }
                }
            }
        }
        if(T.size() >= k) break;
    }

    sort(T.begin(), T.end());
    cout << T[k - 1] << endl;

    return 0;
}