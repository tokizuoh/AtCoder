#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, x;
    cin >> n >> x;
    vector<int> A(n);
    REP(i, n) cin >> A[i];

    sort(A.begin(), A.end());
    int cnt = 0;
    REP(i, n){
        if(x - A[i] >= 0){
            x -= A[i];
            cnt++;
        }else{
            break;
        }
    }

    //xが0より多いということは誰かに押し付ける必要がある
    //押し付け先は必ず満足しないことになる
    //全員が満足している場合は誰か犠牲に
    //そうでない場合は満足してないマンに押し付ければ満足する人数は変わらない
    if(x > 0 and cnt == n){
        cnt--;
    }

    cout << cnt << endl;

    return 0;
}