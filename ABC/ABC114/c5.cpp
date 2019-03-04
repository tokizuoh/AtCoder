#include <bits/stdc++.h>
using namespace std;

int digitnum;
vector<string> S;

int dn(int num, int cnt){
    int d = num / 10;
    cnt++;
    if(d > 0) return dn(d, cnt);
    else return cnt;
}

void dfs(string t, int s){
    S.push_back(t + '3');
    S.push_back(t + '5');
    S.push_back(t + '7');
    if(s + 1 == digitnum) return;
    else{
        dfs(t + '3', s + 1);
        dfs(t + '5', s + 1);
        dfs(t + '7', s + 1);
    }
}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    
    digitnum = dn(n, 0);
    dfs("", 0);

    vector<int> T;
    for(auto x : S){
        bool d = false, e = false, f = false;
        for(int i = 0; i < x.size(); i++){
            if(x[i] == '3') d = true;
            if(x[i] == '5') e = true;
            if(x[i] == '7') f = true;
        }
        if(d and e and f) T.push_back(stoi(x));
    }

    sort(T.begin(), T.end());

    int ans = upper_bound(T.begin(), T.end(), n) - T.begin();
    cout << ans << endl;

    return 0;
}