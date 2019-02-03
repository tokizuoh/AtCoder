#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> L(n);
    for(int i = 0; i < n; i++){
        cin >> L[i];
    }

    sort(L.rbegin(), L.rend());

    int total = 0;
    for(int i = 1; i < n; i++){
        total += L[i];
    }

    if(L[0] < total){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}