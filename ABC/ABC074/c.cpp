#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    double a, b, c, d, e, f;
    double ans = -1e9, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    for(int i = 0; i * a * 100 <= f; i++){
        for(int j = 0; j * b * 100 <= f; j++){
            if(i == 0 and j == 0) continue;
            for(int k = 0; i * a * 100 + b * j * 100 + k * c <= f and k * c <= e * (i * a + j * b); k++){
                for(int l = 0; i * a * 100 + b * j * 100 + k * c + l * d <= f and k * c + l * d <= e * (i * a + j * b); l++){
                    if(ans < (k * c + l * d) / (i * a + j * b)){
                        ans = (k * c + l * d) / (i * a + j * b);
                        x = k * c + l * d + i * a* 100 + j * b * 100;
                        y = k * c + l * d;
                    }
                }
            }
        }
    }

    cout << x << ' ' << y << endl;

    return 0;
}