#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> A(201, 1);
    A[0] = A[1] = 0;

    for(int i = 2; i <= 200; i++){
        if(A[i]){
            for(int j = i + i; j <= 200; j += i){
                A[j] = 0;
            }
        }
    }

    int ans = 0;
    for(int i = 3; i <= n; i += 2){
        int t = 1, t_i = i;
        for(int j = 2; j <= int(sqrt(i)); j++){
            if(A[j] and !(t_i % j)){
                int cnt = 0;
                while(true){
                    t_i /= j;
                    cnt++;
                    if(t_i % j) break;
                }
                t *= (cnt + 1);
                if(t_i == 1) break;
            }
        }
        if(t == 8){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}