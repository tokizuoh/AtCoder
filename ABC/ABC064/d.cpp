#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int op = 0, mi = 1e9;
    /*
    ループ終了後にopが0より大きい…')'が足りない
    ループ終了後にopが0より小さい…'('が足りない
    
    ループ終了後にopが0のとき注意（例３）
    "))))(((("は最後にopはゼロになるが、'('が足りない部分（途中で')'が'('より多いとき）
    を記録するためにopの最小値を更新し続ける

    最後に
    sの先頭に-mi個'('をつける（このときopを同じ分だけ足す（個数が合わないので（例３）））
    sの後ろにop個')'をつける

    */

    for(int i = 0; i < n; i++){
        if(s[i] == '(') op++;
        else op--;
        mi = min(mi, op);
    }

    for(int i = 0; i < -mi; i++){
        s = '(' + s;
        op++;
    }
    for(int i = 0; i < op; i++){
        s += ')';
    }

    cout << s << endl;

    return 0;
}