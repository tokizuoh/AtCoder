#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int ans = n;
    for(int i = 0; i < 2; i++){
        ans *= n;
    }

    cout << ans << endl;

    return 0;
}