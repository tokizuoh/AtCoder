#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> H(n);
    for(int i = 0; i < n; i++){
        cin >> H[i];
    }

    sort(H.begin(), H.end());

    int mini = 1e9;
    for(int i = 0; i < n - k + 1; i++){
        mini = min(mini, H[i + k - 1] - H[i]);
    }

    cout << mini << endl;

    return 0;
}