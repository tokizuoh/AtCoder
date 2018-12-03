#include <bits/stdc++.h>
using namespace std;

void f(int rightRest, string s){
    if(rightRest == 0){
        cout << s << endl;
        return;
    }
    for(char c = 'a'; c <= 'c'; c++){
        f(rightRest - 1, s + c);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    f(n, "");

    return 0;
}