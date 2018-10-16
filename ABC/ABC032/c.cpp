#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    long long K;
    cin >> N >> K;

    bool z = false;
    vector<long long> s(N);
    for(int i = 0; i < N; i++){
        cin >> s[i];
        if(s[i] == 0){
            z = true;
        }
    }

    if(z == true){
        cout << N << endl;
        return 0;
    }

    int left = 0, right = 0, ans = 0;
    long long p = 1;
    while(right < N and left <= right){
        if(p * s[right] <= K){
            p *= s[right];
            ans = max(ans, right - left + 1);
            right++;
        }else{
            p /= s[left];
            left++;
        }
    }

    cout << ans << endl;

    return 0;
}