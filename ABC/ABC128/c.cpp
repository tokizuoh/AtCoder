#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A[m];
    for(int i = 0; i < m; i++){
        int k;
        cin >> k;
        for(int j = 0; j < k; j++){
            int s;
            cin >> s;
            A[i].push_back(s - 1);
        }
    }
    vector<int> P(m);
    for(int i = 0; i < m; i++){
        cin >> P[i];
    }

    int ans = 0;
    for(int i = 0; i < (1 << n); i++){
        vector<int> OK;
        for(int j = 0; j < n; j++){
            if((i >> j) & 1){
                OK.push_back(j);
            }
        }
        int ccnt = 0;
        for(int j = 0; j < m; j++){
            int cnt = 0;
            for(int l = 0; l < A[j].size(); l++){
                for(int g = 0; g < OK.size(); g++){
                    if(OK[g] == A[j][l]){
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt % 2 == P[j]){
                ccnt++;
            }
        }
        if(ccnt == m){
            ans++;
        }
    }

    cout << ans << endl;

    

    return 0;
}