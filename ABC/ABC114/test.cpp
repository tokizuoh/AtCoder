#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<int> A = {1, 3, 3, 4, 5};
    int idx = lower_bound(A.begin(), A.end(), 2) - A.begin();

    cout << idx << endl;

    return 0;
}