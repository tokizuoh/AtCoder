#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> A;
vector<char> B = {'3', '5', '7'};

void f(int rightRest, string s){
    if(rightRest == 0){
        return;
    }
    for(int i = 0; i < 3; i++){
        f(rightRest - 1, B[i]);
    }
    A.push_back();
    
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    string n_str = to_string(n);
    f(n_str.length(), "");

    return 0;
}