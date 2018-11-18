#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    map<string, string> mp;
    mp["Mon"] = "Tue";
    mp["Tue"] = "Wed";
    mp["Wed"] = "Thu";
    mp["Thu"] = "Fri";
    mp["Fri"] = "Sat";
    mp["Sat"] = "Sun";
    mp["Sun"] = "Mon";

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        cout << mp[t]  << endl;
    }

    return 0;
}