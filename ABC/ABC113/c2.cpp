#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<P> A(m);
    map<int, vector<int>> mp1;
    map<P, int> mp2;
    for(int i = 0; i < m; i++){
        int p, y;
        cin >> p >> y;
        A[i] = {p, y};
        mp1[p].push_back(y);
    }

    for(auto &x : mp1){
        sort(x.second.begin(), x.second.end());
        int idx = 1;
        for(auto y: x.second){
            mp2[{x.first, y}] = idx;
            idx++;
        }
    }

    for(int i = 0; i < m; i++){
        P p = A[i];
        int f = p.first;
        int s = p.second;
        int c = mp2[p];
        cout << setfill('0') << right << setw(6) << f;
        cout << setfill('0') << right << setw(6) << c << endl;
    }

    return 0;
}