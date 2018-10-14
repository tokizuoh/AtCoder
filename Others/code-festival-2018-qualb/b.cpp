#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    int total = 0, max_b = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        total += a * b;
        max_b = max(max_b, b);
    }
    cout << total + x * max_b << endl;

    return 0;
}