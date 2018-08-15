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
        cout << (four >= other ? "Yes" : "No") << endl;
    }else{
        cout << (four + 1 >= other ? "Yes" : "No") << endl;
    }

    return 0;
}