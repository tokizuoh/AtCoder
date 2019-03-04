#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<int> A;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '>') cnt++;
        else{
            if(cnt > 0) A.push_back(cnt);
            cnt = 0;
        }
    }
    if(cnt > 0) A.push_back(cnt);

    sort(A.rbegin(), A.rend());

    if(A.size() == 0){
        cout << n - 1 + 0.5 << endl;
    }else{
        A[0]++;
        double ans = 0;
        int t = 0;
        for(int i = 0; i < A.size(); i++){
            t += A[i];
            for(int j = 0; j < A[i]; j++){
                ans += (double)(1) / (double)(j + 2);
            }
        }
        ans += (double)(n) - (double)(t);
        cout << fixed << setprecision(8) << ans << endl;
    }

    return 0;
}