#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        int num = i, cost = 0;
        do{
            cost += num % 10;
            num /= 10;
        }while(num >= 1);

        if(a <= cost && cost <= b){
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}