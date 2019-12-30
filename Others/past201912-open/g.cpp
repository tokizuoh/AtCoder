#include <bits/stdc++.h>
using namespace std;

const int N = 11;
int A[N][N];
int n;

vector<string> S;
string nums = "012";
void dfs(string s, int now){
    for(int i = 0; i < 3; i++){
        if(now + 1 == n){
            S.push_back(s + nums[i]);
        }else{
            dfs(s + nums[i], now + 1);
        }
    }
}


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j){
                cin >> A[i][j];
            }else{
                A[i][j] = 0;
            }
        }
    }

    dfs("", 0);

    int ans = -1e9;
    for(int i = 0; i < (int)S.size(); i++){
        vector<int> X, Y, Z;

        for(int j = 0; j < n; j++){
            if(S[i][j] == '0') X.push_back(j);
            else if(S[i][j] == '1') Y.push_back(j);
            else if(S[i][j] == '2') Z.push_back(j);
        }

        int tmp = 0;
        for(int j = 0; j < (int)X.size(); j++){
            for(int k = j + 1; k < (int)X.size(); k++){
                tmp += A[X[j]][X[k]];
            }
        }
        for(int j = 0; j < (int)Y.size(); j++){
            for(int k = j + 1; k < (int)Y.size(); k++){
                tmp += A[Y[j]][Y[k]];
            }
        }
        for(int j = 0; j < (int)Z.size(); j++){
            for(int k = j + 1; k < (int)Z.size(); k++){
                tmp += A[Z[j]][Z[k]];
            }
        }
        ans = max(ans, tmp); 
    }

    cout << ans << endl;

    return 0;
}