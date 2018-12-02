#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> A(n, 0);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        A[a]++;
        A[b]++;
    }

    for(auto x : A){
        cout << x << endl;
    }


    return 0;
}