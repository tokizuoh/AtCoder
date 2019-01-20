#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int s;
    cin >> s;

    map<int, bool> mp;
    mp[s] = true;
    int tmp = s;
    for(int i = 2; i <= 1000000; i++){
        if(tmp % 2 == 0){
            if(mp[tmp / 2] == true){
                cout << i << endl;
                return 0;
            }else{
                mp[tmp / 2] = true;
                tmp = tmp / 2;
            }
        }else{
            if(mp[tmp * 3 + 1] == true){
                cout << i << endl;
                return 0;
            }else{
                mp[tmp * 3 + 1] = true;
                tmp = tmp * 3 + 1;
            }
        }
    }

    return 0;
}