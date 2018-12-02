#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> A;

void DFS(string s, int num){
    bool a = false, b = false, c = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '3') a = true;
        if(s[i] == '5') b = true;
        if(s[i] == '7') c = true;
    }
    if(a and b and c){
        A.push_back(s);
    }
    if(num == to_string(n).length()){
        return;
    }
    DFS(s + '3', num + 1);
    DFS(s + '5', num + 1);
    DFS(s + '7', num + 1);
    return;
}


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    DFS("", 0);

    int ans = 0;
    for(auto &x : A){
        int nyo = stoi(x);
        if(nyo <= n){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}