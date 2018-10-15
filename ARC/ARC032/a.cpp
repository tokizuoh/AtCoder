#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int t = n * (1 + n) / 2;
    vector<bool> F(t + 1, true);
    F[0] = false;
    F[1] = false;
    for(int i = 2; i <= sqrt(t); i++){
        if(F[i] == true){
            for(int j = i + i; j <= t; j += i){
                F[j] = false;
            }
        }
    }

    cout << (F[t] ? "WANWAN" : "BOWWOW") << endl;

    return 0;
}