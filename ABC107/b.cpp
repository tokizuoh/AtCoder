#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    char A[h][w];
    REP(i, h){
        REP(j, w){
            cin >> A[i][j];
        }
    }

    int B[h][w] = {};
    REP(i, h){
        bool f = true;
        REP(j, w){
            if(A[i][j] == '.'){
                continue;
            }else{
                f = false;
                break;
            }
        }
        if(f){
            REP(j, w){
                B[i][j]++;
            }
        }
    }
    REP(i, w){
        bool f = true;
        REP(j, h){
            if(A[j][i] == '.'){
                continue;
            }else{
                f = false;
                break;
            }
        }
        if(f){
            REP(j, h){
                B[j][i]++;
            }
        }
    }

    REP(i, h){
        bool f = false;
        REP(j, w){
            if(B[i][j] == 2){
                f = true;
                break;
            }
        }
        if(f){
            REP(j, w){
                B[i][j] = 2;
            }
        }
    }
    REP(i, w){
        bool f = true;
        REP(j, w){
            if(B[j][i] == 0){
                f = false;
                break;
            }
        }
        if(f){
            REP(j, w){
                B[j][i] = 2;
            }
        }
    }

    REP(i, h){
        bool f = false;
        REP(j, w){
            if(B[i][j] == 0){
                f = true;
                cout << A[i][j];
            }
        }
        if(f) cout << endl;
    }

    /*
    vector<string> C;
    REP(i, h){
        string s = "";
        REP(j, w){
            if(B[i][j] == 0){
                s += A[i][j];
            }
        }
        if(s != "")C.push_back(s);
    }
    for(auto x : C){
        cout << x << endl;
    }
    */

    return 0;
}