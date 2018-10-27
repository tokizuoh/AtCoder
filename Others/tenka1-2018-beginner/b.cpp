#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A, B, K;
    cin >> A >> B >> K;

    for(int i = 0; i < K; i++){
        int t;
        if(!(i % 2)){
            if(A % 2){
                A--;
            }
            t = A / 2;
            A /= 2;
            B += t;
        }else{
            if(B % 2){
                B--;
            }
            t = B / 2;
            B /= 2;
            A += t;
        }
    }
    cout << A << " " << B << endl;

    return 0;
}