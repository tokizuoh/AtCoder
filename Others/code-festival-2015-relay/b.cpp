#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    vector<string> A(10);
    for(int i = 0; i < 10; i++){
        cin >> A[i];
    }

    for(int i = 0; i < 10; i++){
        bool f = false;
        for(int j = 0; j < 10; j++){
            if(A[j][i] == 'o'){
                f = true;
                break;
            }
        }
        if(!f){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl; 

    return 0;
}