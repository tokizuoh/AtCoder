#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    const int N = 100004;
    vector<bool> F(N, true);
    for(int i = 2; i <= (int)(sqrt(N)); i++){
        if(!F[i]) continue;
        for(int j = i + i; j <= N; j += i){
            F[j] = false;
        }
    }

    for(int i = n; i <= N; i++){
        if(F[i]){
            cout << i << endl;
            return 0;
        }
    }


    return 0;
}