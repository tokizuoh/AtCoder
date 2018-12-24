#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long n, p;
    cin >> n >> p;

    for(long long g = pow(p, 1.0 / n) + 1; g >= 1; g--){
        if(p % (long long)(pow(g, n)) == 0){
            cout << g << endl;
            return 0;
        }
    }

    return 0;
}