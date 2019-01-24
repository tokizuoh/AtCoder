#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, T;
    cin >> N >> T;

    int mini = 1e9;
    for(int i = 0; i < N; i++){
        int c, t;
        cin >> c >> t;
        if(t <= T){
            mini = min(mini, c);
        }
    }

    if(mini == 1e9){
        cout << "TLE" << endl;
    }else{
        cout << mini << endl;
    }

    return 0;
}