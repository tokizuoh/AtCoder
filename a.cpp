#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    string m = (a <= 8 and b <= 8 ? "Yay!" : ":(");
    cout << m << endl;

    return 0;
}