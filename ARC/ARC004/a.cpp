#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<double> X(N), Y(N);
    for(int i = 0; i < N; i++){
        cin >> X[i] >> Y[i];
    }

    double maxi = -1e9;
    for(int i = 0; i < N; i++){
        double a = X[i], b = Y[i];
        for(int j = i + 1; j < N; j++){
            double c = X[j], d = Y[j], e;
            e = sqrt((a - c) * (a - c) + (b - d) * (b - d));
            maxi = max(maxi, e);
        }
    }

    cout << fixed << setprecision(6) << maxi << endl;

    return 0;
}