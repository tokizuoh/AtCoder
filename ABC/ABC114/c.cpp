#include <bits/stdc++.h>
using namespace std;

int n;
int lim;
vector<string> A;

void f(int digitNum, string s){ 
    vector<bool> J(3, false);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '3') J[0] = true;
        if(s[i] == '5') J[1] = true;
        if(s[i] == '7') J[2] = true;
    }
    int idx = find(J.begin(), J.end(), false) - J.begin();
    if(idx == 3){
        A.push_back(s);
    }
    if(digitNum == lim){
        return;
    }
    f(digitNum + 1, s + '3');
    f(digitNum + 1, s + '5');
    f(digitNum + 1, s + '7');
    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    
    lim = to_string(n).length();
    
    if(lim < 3){
        cout << 0 << endl;
        return 0;
    }

    f(0, "");

    vector<int> B(A.size());
    for(int i = 0; i < A.size(); i++){
        B[i] = stoi(A[i]);
    }

    sort(B.begin(), B.end());

    int idx = lower_bound(B.begin(), B.end(), n) - B.begin();

    cout << idx + (B[idx] == n) << endl;

    return 0;
}