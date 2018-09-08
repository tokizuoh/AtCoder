#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    if(a == 2 or b == 2){
        cout << "No" << endl;  
    }else{
        cout << "Yes" << endl;
    }

    return 0;
}