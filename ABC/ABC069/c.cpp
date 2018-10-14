#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int two = 0, four = 0, other = 0;
    REP(i, n){
        int a;
        cin >> a;
        if(!(a % 4)) four++;
        else if(!(a % 2)) two++;
        else other++;
    }

    if(two){
        if(four >= other + 1){
            //4-1-4-1-4-2-2-2
            cout << "Yes" << endl;
            return 0;
        }else if(four == other){
            //2-2-2-4-1-4-1-4-1
            cout << "Yes" << endl;
            return 0;
        }else if(!(other)){
            cout << "Yes" << endl;
            return 0;
        }else if(!(other) and !(four)){
            cout << "Yes" << endl;
            return 0;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }else{
        //2の倍数がないとき 1-4-1-4-1みたいに挟べればOK
        cout << (four + 1 >= other ? "Yes" : "No") << endl;
    }

    return 0;
}