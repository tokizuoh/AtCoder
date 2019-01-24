#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    double t, a;
    cin >> t >> a;

    double mini = 1e9;
    int idx = 1e9;
    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        double ave = t - h * 0.006;
        mini = min(mini, abs(a - ave));
        if(mini == abs(a - ave)){
            idx = i;
        }
    }

    cout << idx + 1 << endl;

    return 0;
}