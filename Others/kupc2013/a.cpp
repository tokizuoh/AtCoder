#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;
    
    string s = "kogakubu10gokan";
    for(int i = 0; i < n; i++){
        int a;
        string t;
        cin >> a >> t;
        if(q >= a) s = t;
    }

    cout << s << endl;

    return 0;
}