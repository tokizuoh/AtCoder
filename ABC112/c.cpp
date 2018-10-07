#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<long long> x(N), y(N), h(N);
    int t;
    REP(i, N){
        cin >> x[i] >> y[i] >> h[i];

        /*
        ピラミッドの高さHは1以上の整数
        座標(X, Y)の高度は場合によって0になりうるが，
        最低一つのデータセットでH > abs(X - Cx) + abs(Y - Cy)を満たす
        h[i] > 0となるものならどれでもいいので出現位置を記録しておく
        */
        if(h[i] > 0){
            t = i;
        }
    }

    // CxとCyは0以上100以下
    REP(cx, 101){
        REP(cy, 101){
            /*
            h[t]は0より大きいので，
            h[t] = H - abs(X - Cx) - abs(Y - Cy)
            となる
            */
            long long H = h[t] + abs(x[t] - cx) + abs(y[t] - cy);
            bool f = true;

            //すべてのデータセットに対し条件式が矛盾しないか確認
            REP(i, N){
                long long tmp;
                tmp = max(H - abs(x[i] - cx) - abs(y[i] - cy), 0LL);
                if(h[i] != tmp){
                    f = false;
                    break;
                }
            }
            if(f){
                cout << cx << " " << cy << " " << H << endl;
                return 0;
            }
        }
    }

    return 0;
}