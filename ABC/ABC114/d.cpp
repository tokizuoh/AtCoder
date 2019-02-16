#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    
    int p[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    vector<int> d(25);
    for(int i = 2; i <= n; i++){
        int a = i, j = 0;
        while(a > 1){
            if(a % p[j]){
                j++;
                if(j > 25) break;
            }else{
                a /= p[j];
                d[j]++;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 25; i++){
        if(d[i] >= 74) ans++;
        for(int j = i + 1; j < 25; j++){
            if(i == j) continue;
            if(d[i] >= 4 and d[j] >= 14) ans++;
            if(d[i] >= 14 and d[j] >= 4) ans++;
            if(d[i] >= 2 and d[j] >= 24) ans++;
            if(d[i] >= 24 and d[j] >= 2) ans++;            
            for(int k = j + 1; k < 25; k++){
                if(i != k and d[i] >= 2 and d[j] >= 4 and d[k] >= 4) ans++;
                if(i != k and d[i] >= 4 and d[j] >= 2 and d[k] >= 4) ans++;
                if(i != k and d[i] >= 4 and d[j] >= 4 and d[k] >= 2) ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}