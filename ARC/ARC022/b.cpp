#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    unordered_map<int, bool> mp;
    int left = 0, right = 0, ans = 0;
    while(left <= right and right < N){
        if(mp[A[right]] == false){
            mp[A[right]] = true;
            ans = max(ans, right - left + 1);
            right++;
        }else{
            mp[A[left]] = false;
            left++;
        }
    }

    cout << ans << endl;

    return 0;
}