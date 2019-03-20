#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;

    for(int i = 0; i < q; i++){
        int v, w;
        cin >> v >> w;
        if(n == 1){
            cout << min(v, w) << endl;
        }else{
            while(true){
                if(v < w) swap(v, w);
                int p = (v + n - 2) / n;
                if(p == w){
                    cout << p << endl;
                    break;
                }
                v = p;
            }
        }
    }

    return 0;
}