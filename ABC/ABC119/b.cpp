#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    double ans = 0;
    for(int i = 0; i < n; i++){
        double x;
        string u;
        cin >> x >> u;
        if(u == "JPY") ans += x;
        else{
            ans += x * (380000.00);
        }
    }

    cout << fixed << setprecision(5) << ans << endl;

    return 0;
}