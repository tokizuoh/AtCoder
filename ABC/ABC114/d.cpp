#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<bool> F(n + 1, true);
    F[0] = F[1] = false;

    for(int i = 2; i <= sqrt(n); i++){
        if(F[i]){
            for(int j = i + i; j <= n; j += i){
                F[j] = false;
            }
        }
    }

    vector<int> A;
    for(int i = 0; i < n + 1; i++){
        if(F[i]){
            A.push_back(i);
        }
    }

    map<int, int> mp;
    for(int i = 2; i <= n; i++){
        int k = i;
        for(int j = 0; j < A.size(); j++){
            while(true){
                if(k % A[j] == 0){
                    mp[A[j]]++;
                    k /= A[j];
                }else{
                    break;
                }
            }
        }
    }

    for(auto x : mp){
        cout << x.first << ' ' << x.second << endl;
    }


    return 0;
}