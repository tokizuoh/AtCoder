#include <bits/stdc++.h>
using namespace std;

int f(int a, int b){
    while(1){
        if(a < b) swap(a, b);
        if(!b) break;
        a %= b;
    }
    return a;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int g = A[0];
    for(int i = 1; i < n; i++){
        g = f(g, A[i]);
    }

    cout << g << endl;



    return 0;
}