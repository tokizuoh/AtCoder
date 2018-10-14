#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    long long k;
    cin >> n >> k;
    vector<long long> A(n);

    //0があるか確認
    //0が数列内にあれば数列のすべての要素の積は必ずk以下になる
    bool zero = false;
    REP(i, n){
        cin >> A[i];
        if(A[i] == 0){
            zero = true;
        }
    }

    if(zero){
        cout << n << endl;
        return 0;
    }
    
    int left = 0, right = 0, ans = 0;
    long long tmp = 1;
    while(left <= right and right < n){
        if(tmp * A[right] <= k){
            tmp *= A[right];
            ans = max(ans, right - left + 1);
            right++;
        }else{
            tmp /= A[left];
            left++;
        }
    }
    cout << ans << endl;


    return 0;
}