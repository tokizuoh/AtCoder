#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<double> X(n), Y(n);
    for(int i = 0; i < n; i++){
        cin >> X[i] >> Y[i];
    }


    vector<int> A(n);
    for(int i = 0; i < n; i++){
        A[i] = i;
    }

    sort(A.begin(), A.end());

    double ans = 0;
    do{
        double a = -1, b = -1, tmp = 0;
        for(int i = 0; i < n; i++){
            if(i == 0){
                a = X[A[i]];
                b = Y[A[i]];
            }else{
                double j1 = (a - X[A[i]]);
                double j2 = (b - Y[A[i]]);
                tmp += sqrt(j1 * j1 + j2 * j2);
            }
            a = X[A[i]];
            b = Y[A[i]];
        }
        ans += tmp;
    }while(next_permutation(A.begin(), A.end()));

    double g = 1;
    for(int i = 1; i <= n; i++){
        g *= i;
    }

    cout << fixed << setprecision(10) << ans / g << endl;

    return 0;
}