#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    double t, a, d = 1e9;
    cin >> n >> t >> a;

    int idx = 0;
    for(int i = 0; i < n; i++){
        double c;
        cin >> c;
        double h = t - c * 0.006;
        if(abs(h - a) < d){
            idx = i;
            d = abs(h - a);
        }
    }

    cout << idx + 1 << endl;

    return 0;
}