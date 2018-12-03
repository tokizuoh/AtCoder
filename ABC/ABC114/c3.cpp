#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> A;
vector<char> B = {'3', '5', '7'};
vector<int> C;

void f(int rightRestB, string s){
    vector<bool> F(3, false);
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < min(3, (int)s.size()); j++){
            if(s[i] == B[j]){
                F[j] = true;
            }
        }
    }
    if(count(F.begin(), F.end(), true) == 3){
        A.push_back(s);
    }
    if(rightRestB == to_string(n).length()){
        return;
    }
    for(int i = 0; i < 3; i++){
        f(rightRestB + 1, s + B[i]);
    }
    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    f(0, "");

    for(auto &x : A){
        C.push_back(stoi(x));
    }

    sort(C.begin(), C.end());

    int ans = 0;
    for(auto &x : C){
        if(x <= n){
            ans++;
        }else{
            break;
        }
    }

    cout << ans << endl;

    return 0;
}