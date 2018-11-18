#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<string> S(3);
    for(int i = 0; i < 3; i++){
        cin >> S[i];
    }

    int now = 0;
    vector<int> Idx(3, 0);
    while(true){
        int past = now;
        if(Idx[now] == S[now].size()){
            cout << char('A' + now) << endl;
            return 0;
        }
        now = int(S[now][Idx[now]] - 'a');
        Idx[past]++;
    }

    return 0;
}