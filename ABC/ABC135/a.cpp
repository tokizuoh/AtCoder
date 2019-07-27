#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long a, b;
    cin >> a >> b;
    long long tmp = a + b;
    tmp /= 2;
    if(abs(a - tmp) == abs(b - tmp)){
        cout << tmp << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}