#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int x;
    cin >> x;

    vector<int> A;
    A.emplace_back(1);
    REP(i, 40){
        if(i <= 1) continue;
        int tmp = i;
        while(tmp < x){
            tmp *= i;
            A.push_back(tmp);
        }
    }
    
    sort(A.begin(), A.end());
    
    set<int> st;
    for(auto hoge : A) st.insert(hoge);
    vector<int> B;
    for(auto hoge : st) B.push_back(hoge);

    sort(B.begin(), B.end());

    int maxi = -1e9;
    for(int i = 0; i < B.size(); i++){
        if(B[i] > x) break;
        maxi = max(maxi, B[i]);
    }
    cout << maxi << endl; 

    return 0;
}