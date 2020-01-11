#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> P(n), Q(n);
    for(int i = 0; i < n; i++){
        cin >> P[i];
    }
    for(int i = 0; i < n; i++){
        cin >> Q[i];
    }

    
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        A[i] = i + 1;
    }

    int ai = -1, bi = -1, cnt = 0;
    do{
        if(ai == -1){
            bool f = true;
            for(int i = 0; i < n; i++){
                if(A[i] == P[i]);
                else{
                    f = false;
                    break;
                }
            }
            if(f) ai = cnt;
        }
        if(bi == -1){
            bool f = true;
            for(int i = 0; i < n; i++){
                if(A[i] == Q[i]);
                else{
                    f = false;
                    break;
                }
            }
            if(f) bi = cnt;
        }
        if(ai != -1 and bi != -1){
            break;
        }
        cnt++;
    }while(next_permutation(A.begin(), A.end()));

    cout << abs(ai - bi) << endl;

    return 0;
}