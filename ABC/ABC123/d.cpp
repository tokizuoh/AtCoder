#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<long long> A(x), B(y), C(z);
    for(int i = 0; i < x; i++){
        cin >> A[i];
    }
    for(int i = 0; i < y; i++){
        cin >> B[i];
    }
    for(int i = 0; i < z; i++){
        cin >> C[i];
    }

    vector<long long> AB;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            AB.push_back(A[i] + B[j]);
        }
    }

    sort(AB.rbegin(), AB.rend());
    AB.resize(k);

    vector<long long> ABC;
    for(int i = 0; i < z; i++){
        for(int j = 0; j < AB.size(); j++){
            ABC.push_back(C[i] + AB[j]);
        }
    }

    sort(ABC.rbegin(), ABC.rend());

    for(int i = 0; i < k; i++){
        cout << ABC[i] << endl;
    }

    return 0;
}