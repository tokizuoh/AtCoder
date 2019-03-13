#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long h, w;
    cin >> h >> w;

    long long mini = 1e9;
    for(long long i = 1; i < h; i++){
        long long a = i * w;
        long long b = (h - i) / 2 * w;
        long long c = h * w - a - b;
        mini = min(mini, max(a, max(b, c)) - min(a, min(b, c)));
        
        b = (w / 2) * (h - i);
        c = h * w - a - b;
        mini = min(mini, max(a, max(b, c)) - min(a, min(b, c)));
    }

    for(long long i = 1; i < w; i++){
        long long a = i * h;
        long long b = (w - i) / 2 * h;
        long long c = h * w - a - b;
        mini = min(mini, max(a, max(b, c)) - min(a, min(b, c)));

        b = (h / 2) * (w - i);
        c = h * w - a - b;
        mini = min(mini, max(a, max(b, c)) - min(a, min(b, c)));
    }

    cout << mini << endl;

    return 0;
}