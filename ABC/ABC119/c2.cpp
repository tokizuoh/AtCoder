#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> L(n);
    for(int i = 0; i < n; i++){
        cin >> L[i];
    }

    char A[4] = {'0', '1', '2', '3'};

    int mini = 1e9;
    for(int i = 0; i < (int)(pow(4, n)); i++){
        string s = "";
        int t = i;
        while(true){
            s += A[t % 4];
            t /= 4;
            if(t == 0) break;
        }
        reverse(s.begin(), s.end());
        int ss = s.size();
        for(int j = 0; j < n - ss; j++){
            s = '0' + s;
        }
        int na = 0, nb = 0, nc = 0, sc = 0;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '0');
            else if(s[j] == '1'){
                sc += (na == 0 ? 0 : 1);
                na += L[j];
            }else if(s[j] == '2'){
                sc += (nb == 0 ? 0 : 1);
                nb += L[j];
            }else if(s[j] == '3'){
                sc += (nc == 0 ? 0 : 1);
                nc += L[j];
            }
        }
        if(na > 0 and nb > 0 and nc > 0){
            int cost = abs(na - a) + abs(nb - b) + abs(nc - c) + sc * 10;
            mini = min(mini, cost);
        }
    }

    cout << mini << endl;

    return 0;
}