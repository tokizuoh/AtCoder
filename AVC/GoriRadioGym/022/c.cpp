#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long  h, w;
    cin >> h >> w;

    long long mini = 1e18;
    long long h2 = h / 2;
    for(long long i = 1; i <= w; i++){
        long long s1, s2, s3;
        s1 = i * h;
        s2 = (w - i) * h2;
        s3 = (w - i) * (h - h2);
        mini = min(mini, max(s1, max(s2, s3)) - min(s1, min(s2, s3)));
    }
    long long w2 = w / 2;
    for(long long i = 1; i <= h; i++){
        long long s1, s2, s3;
        s1 = w * i;
        s2 = (h - i) * w2;
        s3 = (h - i) * (w - w2);
        mini = min(mini, max(s1, max(s2, s3)) - min(s1, min(s2, s3)));    
    }
    if(h > 2){
        long long a1, a2, a3;
        a1 = (h / 3) * w;
        a2 = (h / 3) * w;
        a3 = (h - h/3 - h/3) * w;
        mini = min(mini, max(a1, max(a2, a3)) - min(a1, min(a2, a3)));
    }
    if(w > 2){
        long long a1, a2, a3;
        a1 = (w / 3) * h;
        a2 = (w / 3) * h;
        a3 = (w - w/3 - w/3) * h;
        mini = min(mini, max(a1, max(a2, a3)) - min(a1, min(a2, a3)));
    }

    cout << mini << endl;

    return 0;
}