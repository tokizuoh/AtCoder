#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> A, B;
    for(int i = 0; i < n; i++){
        char c;
        int a;
        cin >> c >> a;
        if(a == 0) continue;
        if(c == '*') A.push_back(a);
        else if(c == '+') B.push_back(a);
    }

    int ans = 0;
    for(auto x : B){
        ans += x;
    }
    for(auto x : A){
        ans *= x;
    }

    cout << ans << endl;

    return 0;
}