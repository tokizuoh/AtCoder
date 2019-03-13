#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, t, e;
    cin >> n >> t >> e;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        int a = t / x;
        int b = (t + x - 1) / x;
        if(abs(t - a * x) <= e or abs(t - b * x) <= e){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}