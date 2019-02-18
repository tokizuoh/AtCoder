#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> W(n), E(n);
    for(int i = 0; i < n; i++){
        if(s[i] == 'W') W[i]++;
        else E[i]++;
        if(i > 0){
            W[i] += W[i - 1];
            E[i] += E[i - 1];
        }
    }

    int mini = 1e9;
    for(int i = 0; i < n; i++){
        int a = (i > 0 ? W[i - 1] : 0);  // iまでのWの数
        int b = E[n - 1] - E[i]; 
        mini = min(mini, a + b);
    }
    cout << mini << endl;

    return 0;
}