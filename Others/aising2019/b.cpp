#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;
    vector<int> P(n);
    for(int i = 0; i < n; i++){
        cin >> P[i];
    }

    int x = 0, y = 0, z = 0;
    for(int i = 0; i < n; i++){
        if(P[i] <= a) x++;
    }
    for(int i = 0; i < n; i++){
        if(a < P[i] and P[i] <= b) y++;
    }
    for(int i = 0; i < n; i++){
        if(b < P[i]) z++;
    }

    cout << min(x, min(y, z)) << endl;

    return 0;
}