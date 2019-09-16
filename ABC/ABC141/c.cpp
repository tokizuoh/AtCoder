#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> Point(n);
    for(int i = 0; i < q; i++){
        int a;
        cin >> a;
        a--;
        Point[a]++;
    }

    for(int i = 0; i < n; i++){
        int t = k - q + Point[i];
        if(t <= 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}