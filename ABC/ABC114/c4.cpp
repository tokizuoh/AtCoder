#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> A;

void f(int digitNum, string s, int lim){
    bool a = false, b = false, c = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '3') a = true;
        if(s[i] == '5') b = true;
        if(s[i] == '7') c = true;
    }
    if(a && b && c){
        A.push_back(s);
    }
    if(digitNum == lim){
        return;
    }
    f(digitNum + 1, s + '3', lim);
    f(digitNum + 1, s + '5', lim);
    f(digitNum + 1, s + '7', lim);
    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;

    int lim = to_string(n).length();

    // 七五三数は必ず'7', '5', '3'を含むので三桁以上は確定
    // nの桁数がが二桁以下の場合0
    if(lim < 3){
        cout << 0 << endl;
        return 0;
    }

    // nの桁数と同じ桁数までの七五三数を列挙
    f(0, "", lim);

    // vector Aにはstring型で七五三数が格納されているので数値に直す
    vector<int> B;
    for(auto &x : A){
        B.push_back(stoi(x));
    }

    sort(B.begin(), B.end());

    // upper_boundを使用
    // もし配列の最後に欲しいものがあった場合、思わしくない動作をするのではないかと思ったが，
    //　vector<int >A = {i, 2, 3}でupper_boundの第三引数を3とした場合，3が返ってくる（指定した数値より大きい数がでてくるところを指すが範囲外参照的な感じになってもいいらしい）
    int idx = upper_bound(B.begin(), B.end(), n) - B.begin();

    cout << idx << endl;

    return 0;
}