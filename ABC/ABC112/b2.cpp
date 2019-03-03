#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, t;
    cin >> n >> t;
    
    int mini = 1e9;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(t >= b){
            mini = min(mini, a);
        }
    }

    if(mini == 1e9) cout << "TLE" << endl;
    else cout << mini << endl;

    return 0;
}