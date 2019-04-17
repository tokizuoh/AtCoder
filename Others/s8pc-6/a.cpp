#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, t;
    cin >> n >> t;

    int c = 0;
    for(int i = 0; i < n - 1; i++){
        int a;
        cin >> a;
        c += a;
    }

    cout << (c + t - 1) / t << endl;

    return 0;
}