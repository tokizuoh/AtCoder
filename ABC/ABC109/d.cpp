#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    int A[h][w];
    REP(i, h) REP(j, w) cin >> A[i][j];

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    vector<vector<int>> B;

    REP(i, h){
        REP(j, w){
            if(A[i][j] == 0) continue;
            if(A[i][j] % 2 == 1){
                REP(k, 4){
                    int nx, ny;
                    nx = i + dx[k];
                    ny = j + dy[k];
                    if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                        continue;
                    }
                    if((A[nx][ny] % 2 != 1) and (nx < i or ny < j)) continue;
                    A[nx][ny]++;
                    
                    vector<int> C(4);
                    C[0] = i + 1;
                    C[1] = j + 1;
                    C[2] = nx + 1;
                    C[3] = ny + 1;

                    B.push_back(C);

                    C.clear();

                    A[i][j]--;
                    break;
                }
            }
        }
    }

    cout << B.size() << endl;
    REP(i, B.size()){
        REP(j, B[i].size()){
            if(j) cout << " " << B[i][j];
            else cout << B[i][j];
        }
        cout << endl; 
    }

    /*
    REP(i, h){
        REP(j, w){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    */
    

    return 0;
}