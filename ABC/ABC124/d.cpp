#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> B, W;
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(s[i - 1] == s[i]){
            cnt++;
            if(i == n - 1){
                if(s[i - 1] == '0'){
                    B.push_back(cnt);
                }else{
                    W.push_back(cnt);
                }
            }
        }else{
            if(s[i - 1] == '0'){
                B.push_back(cnt);
            }else{
                W.push_back(cnt);
            }
            cnt = 1;
        }
    }
    if(cnt == 1){
        if(s[n - 1] == '0'){
            B.push_back(cnt);
        }else{
            W.push_back(cnt);
        }
    }

    if(B.size() <= k){
        cout << n << endl;
        return 0;
    }

    int ans = 0;
    vector<int> Ba, Wa;
    Ba.push_back(0);
    Wa.push_back(0);
    for(int i = 0; i < B.size(); i++){
        Ba.push_back(Ba[Ba.size() - 1] + B[i]);
    }
    for(int i = 0; i < W.size(); i++){
        Wa.push_back(Wa[Wa.size() - 1] + W[i]);
        ans = max(ans, W[i]);
    }

    if(Ba.size() > Wa.size()){
        for(int i = k; i < Ba.size(); i++){
            if(i == Ba.size() - 1){
                ans = max(ans, Ba[i] - Ba[i - k] + Wa[(int)Wa.size() - 1] - Wa[(int)Wa.size() - 1 - k]);  
            }else if(i == k){
                ans = max(ans, Ba[i] - Ba[i - k] + Wa[i] - Wa[0]);
            }else{
                ans = max(ans, Ba[i] - Ba[i - k] + Wa[min(i, (int)Wa.size() - 1)] - Wa[max(0, i - k - 1)]);            
            }
        }
    }else if(Ba.size() < Wa.size()){
        for(int i = k; i < Ba.size(); i++){
            if(i == Ba.size() - 1){
                ans = max(ans, Ba[i] - Ba[i - k] + Wa[max(i + 1, (int)Ba.size() - 1)] - Wa[i - k]);  
            }else if(i == k){
                ans = max(ans, Ba[i] - Ba[i - k] + Wa[max(i, min(i + 1, (int)Wa.size() - 1))] - Wa[0]);   
            }else{
                ans = max(ans, Ba[i] - Ba[i - k] + Wa[min(i + 1, (int)Wa.size() - 1)] - Wa[max(0, i - k)]);            
            }
        }
    }else{
        for(int i = k; i < Ba.size(); i++){
            // cout << ans << endl;
            if(i == Ba.size() - 1){
                if(s[n - 1] == '0') ans = max(ans, Ba[i] - Ba[i - k] + Wa[i] - Wa[max(0, i - k)]);
                else ans = max(ans, Ba[i] - Ba[i - k] + Wa[i] - Wa[max(0, i - k - 1)]);
            }else if(i == k){
                if(s[0] == '0') ans = max(ans, Ba[i] - Ba[i - k] + Wa[i] - Wa[0]);
                else ans = max(ans, Ba[i] - Ba[i - k] + Wa[max(i, min(i + 1, (int)Wa.size() - 1))] - Wa[0]);   
            }else{
                ans = max(ans, Ba[i] - Ba[i - k] + Wa[min(i + 1, (int)Wa.size() - 1)] - Wa[max(0, i - k)]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
