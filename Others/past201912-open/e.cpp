#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;

    vector<int> S1(q);
    vector<pair<int, int>> S2(q);
    for(int i = 0; i < q; i++){
        cin >> S1[i];
        if(S1[i] == 1){
            cin >> S2[i].first >> S2[i].second;
            S2[i].first--;
            S2[i].second--;
        }else{
            cin >> S2[i].first;
            S2[i].first--;
            S2[i].second = -1;
        }
    }

    char C[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = 'N';
        }
    }

    for(int i = 0; i < q; i++){
        int num = S1[i];
        int a = S2[i].first;

        if(num == 1){
            int b = S2[i].second;
            C[a][b] = 'Y';
        }else if(num == 2){
            for(int j = 0; j < n; j++){
                if(C[j][a] == 'Y'){
                    C[a][j] = 'Y';
                }
            }                
        }else{
            vector<int> B;
            for(int j = 0; j < n; j++){
                if(C[a][j] == 'Y'){
                    for(int k = 0; k < n; k++){
                        if(C[j][k] == 'Y'){
                            B.push_back(k);
                        }
                    }
                }
            }

            for(int j = 0; j < (int)B.size(); j++){
                C[a][B[j]] = 'Y';
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j) cout << C[i][j];
            else cout << 'N';
        }
        cout << endl;
    }

    return 0;
}