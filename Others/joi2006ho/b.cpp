#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    while(n--){
        string next = "";
        int cnt = 1, ss = s.size();
        char bef = s[0];
        for(int i = 1; i < ss; i++){
            if(bef == s[i]) cnt++;
            else{
                next += to_string(cnt) + bef;
                cnt = 1;
                bef = s[i];
            }
            if(i == ss - 1){
                next += to_string(cnt) + bef;
            }
        }
        s = next;
    }

    cout << s << endl;

    return 0;
}