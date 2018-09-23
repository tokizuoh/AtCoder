#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> X(n), Y(m);
    REP(i, n) cin >> X[i];
    REP(i, m) cin >> Y[i];

    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    
    int x_max = X[n-1];
    int y_min = Y[0];

    if(y_min <= y and x < x_max and y_min - x_max > 0){
        cout << "No War" << endl;
    }else{
        cout << "War" << endl;
    }

    return 0;
}