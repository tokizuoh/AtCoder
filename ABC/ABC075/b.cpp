#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    char D[51][51];
    REP(i, h){
        REP(j, w){
            cin >> D[i][j];
        }
    }

    int A[51][51] = {};

    int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[8] = {0, 0, -1, 1, -1, 1, -1, 1};
    REP(i, h){
        REP(j, w){
            int cnt = 0;
            REP(k, 8){
                bool f1, f2;
                f1 = (i + dx[k] < 0) or (j + dy[k] < 0);
                f2 = (i + dx[k] >= h) or (j + dy[k] >= w);
                if(f1 or f2) continue;
                if(D[i + dx[k]][j + dy[k]] == '#') cnt++;
            }
            A[i][j] = cnt;
        }
    }

    REP(i, h){
        REP(j, w){
            if(D[i][j] == '#') cout << '#';
            else cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}