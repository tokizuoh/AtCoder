#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, total = 0;
    cin >> n >> m;
    vector<int> A(m + 1);
    
    //いもす法で区間の和を出す
    REP(i, n){
        int l, r, s;
        cin >> l >> r >> s;
        A[l - 1] += s;
        A[r] -= s;
        total += s;
    }
    REP(i, m + 1){
        if(i){
            A[i] += A[i - 1];
        }
    }

    sort(A.begin(), A.end());

    //A[0]は0　上のループで必ず配列の最後は0になる
    //A[1]は一番薄い重なりあいのコスト
    //→全ての宝石を手にした場合sの総和となる
    //全ての宝石が手に入らないような入力もある（入力例2）
    //sのtotalからA[1]を引けばどれかの宝石を犠牲にした最大のコストが得られる
    cout << total - A[1] << endl;

    return 0;
}