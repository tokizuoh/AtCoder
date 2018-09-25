#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    long long total = 0;
    vector<long long> A(n);
    REP(i, n){
        cin >> A[i];
        total += A[i];
    }

    long long mini = 1e18, x = 0;
    //すぬけくんもアライグマくんも一枚以上カードを取るのでn-1まで
    REP(i, n - 1){
        x += A[i];
        //残り:(総和 - 今見てるところまでの和) - (今見てるところまでの和)
        mini = min(mini, abs(total - x - x));
    }
    cout << mini << endl;

    return 0;
}