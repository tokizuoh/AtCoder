#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(abs(a - b) == 0){
            cout << -1 << endl;
        }else{
            cout << abs(a - b) << endl;
        }
    }

    return 0;
}