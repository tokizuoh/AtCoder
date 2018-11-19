#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = 0, maxi = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'I') x++;
        else x--;
        maxi = max(maxi, x);
    }

    cout << maxi << endl;

    return 0;
}