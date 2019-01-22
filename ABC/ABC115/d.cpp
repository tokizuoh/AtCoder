#include <bits/stdc++.h>
using namespace std;

long long n, x;

// レベルiバーガーの厚さ　Ai
vector<long long> A;

// レベルiバーガーに含まれるパティの総数 Pi
vector<long long> P;

// レベルnnバーガーの下からxx層に含まれるパティの枚数 f(nn, xx)
long long f(long long nn, long long xx){
    
    // レベル0バーガーはパティ1枚
    if(nn == 0){
        return (xx <= 0 ? 0 : 1);

    // xx層 が 1+レベルnn-1バーガーの総数 以下の場合
    }else if(xx <= 1 + A[nn - 1]){
        // nn-1バーガーのxx-1層を見ればいい（xx-1の-1は一番下のバン）
        return f(nn - 1, xx - 1);

    }else{

        // [B][レベルi-1バーガー] | -> [P][レベルi-1バーガー][B]
        //
        // 丸々レベルnn-1バーガー1つに内包されるパティの数 + 1枚のパティ + 
        // レベルnn-1バーガーの中の (xx-レベルnn-1バーガーの総数とBとP)層
        return P[nn - 1] + 1 + f(nn - 1, xx - 2 - A[nn - 1]);
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> x;

    A.push_back(1);
    P.push_back(1);
    for(long long i = 0; i < n; i++){

        // [B][レベルi-1バーガー][P][レベルi-1バーガー][B]
        A.push_back(A[i] * 2 + 3);
        P.push_back(P[i] * 2 + 1);
    }

    cout << f(n, x) << endl;

    return 0;
}