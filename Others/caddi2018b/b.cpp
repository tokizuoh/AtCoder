#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, h, w;
    cin >> n >> h >> w;

    int cnt = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a >= h && b >= w){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}