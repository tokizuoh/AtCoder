#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    int mini = 1e9;
    int h2 = h / 2;
    for(int i = 1; i <= w; i++){
        int s1, s2, s3, h2;
        s1 = i * h;
        s2 = (w - i) * h2;
        s3 = (w - i) * (h - h2);
        cout << s1 << ' ' << s2 << ' ' << s3 << endl;
        mini = min(mini, max(s1, max(s2, s3)) - min(s1, min(s2, s3)));
    }
    int w2 = w / 2;
    for(int i = 1; i <= h; i++){
        int s1, s2, s3;
        s1 = w * i;
        s2 = (h - i) * w2;
        s3 = (h - i) * (w - w2);
        mini = min(mini, max(s1, max(s2, s3)) - min(s1, min(s2, s3)));    
    }

    cout << mini << endl;

    return 0;
}