#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int total = 0;
    for(int i = 0; i < 5; i++){
        int a;
        cin >> a;
        total += max(a, 40);
    }

    cout << total / 5 << endl;

    return 0;
}