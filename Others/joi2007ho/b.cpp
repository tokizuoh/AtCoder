#include <bits/stdc++.h>
using namespace std;
typedef pair<pair<int, int>, int> P; // {{start, end}, seq_cnt}

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> A(k);
    vector<bool> B(n + 1);
    for(int i = 0; i < k; i++){
        cin >> A[i];
        B[A[i]] = true;
    }

    sort(A.begin(), A.end());
    A.push_back(1e9);

    vector<P> C;

    int maxi = 0, cnt = 1, s = -1;
    for(int i = 0; i < k; i++){
        if(A[i] + 1 == A[i + 1]){
            if(s == -1) s = i;
            cnt++;
        }else{
            maxi = max(maxi, cnt);
            C.push_back({{(s == -1 ? A[i] : A[s]), A[i]}, cnt});
            cnt = 1;
            s = -1;
        }
    }

    if(B[0] == true){
        for(int i = 0; i < (int)C.size() - 1; i++){
            P p1 = C[i];
            int s1 = p1.first.first;
            int e1 = p1.first.second;
            int c1 = p1.second;
            P p2 = C[i + 1];
            int s2 = p2.first.first;
            int e2 = p2.first.second;
            int c2 = p2.second;
            if(e1 + 2 == s2){
                maxi = max(maxi, c1 + c2 + 1);
            }
        }
        cout << maxi << endl;
    }else{
        cout << maxi << endl;
    }

    /*
    cout << "#########" << endl;
    for(auto x : C){
        cout << x.first.first << ' ' << x.first.second << ' ' << x.second << endl;
    }
    */

    return 0;
}