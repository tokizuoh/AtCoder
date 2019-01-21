#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int s;
    cin >> s;

    unordered_map<int, bool> mp;
    mp[s] = true;
 
    int idx = 2;
    while(true){
        if(s % 2 == 0){
            if(mp[s / 2] == true){
                break;
            }else{
                mp[s / 2] = true;
                s = s / 2;
            }
        }else{
            if(mp[3 * s + 1] == true){
                break;
            }else{
                mp[3 * s + 1] = true;
                s = 3 * s + 1;
            }
        }
        idx++;
    }

    cout << idx << endl;

    return 0;
}