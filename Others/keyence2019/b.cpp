#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    string v = "keyence";
    bool bf = false, las = false;

    int vc = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == v[vc]){
            vc++;
            if(vc == 7){
                cout << "YES" << endl;
                return 0;
            }
            if(bf == true){
                las = true;
            }
        }else{
            if(bf == false){
                bf = true;
            }else if((bf == true) && (las == false)){
                continue;
            }else if((bf == true) && (las == true)){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    if(vc == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}