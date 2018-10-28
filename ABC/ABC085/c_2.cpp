#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, Y;
    cin >> N >> Y;
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N; j++){
            int k = N - i - j;
            if(k < 0) continue;
            if(i * 10000 + j * 5000 + k * 1000 == Y){
                cout << i << ' ' << j << ' ' << k << endl;
                return 0;
            }
        }
    }

    cout << -1 << ' ' << -1 << ' ' << -1 << endl;

    return 0;
}