#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int t = n;

    vector<int> A;
    for(int i = 2; i * i <= n; i++){
        while(t % i == 0){
            A.push_back(i);
            t /= i;
        }
    }
    if(t != 1) A.push_back(t);

    if(A.size() < k){
        cout << -1 << endl;
        return 0;
    }

    for(int i = 0; i < k - 1; i++){
        cout << A[i] << ' ';
    }

    int last = 1;
    for(int i = A.size() - 1; i >= k - 1; i--){
        last *= A[i];
    }
    cout << last << endl;

    return 0;
}