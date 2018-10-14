#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s, t;
    cin >> s >> t;

    int n = s.size();

    vector<int> A(26, 0), B(26, 0);
    REP(i, n){
        A[(int)(s[i] - 'a')]++;
        B[(int)(t[i] - 'a')]++;
    }

    vector<int> C, D;
    int cnt = 0;
    REP(i, 26){
        if(A[i] == B[i]){
            cnt++;
            continue;
        }else{
            if(A[i] > 0){
                C.push_back(A[i]);
            }
            if(B[i] > 0){
                D.push_back(B[i]);
            }
        }
    }
    if(cnt == 26){
        cout << "Yes" << endl;
        return 0;
    }

    if((int)(C.size()) != (int)(D.size())){
        cout << "No" << endl;
        return 0;
    }

    sort(C.begin(), C.end());
    sort(D.begin(), D.end());

    REP(i, (int)(C.size())){
        if(C[i] == D[i]) continue;
        else{
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}