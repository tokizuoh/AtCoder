#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    map<long long, long long> mp;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        mp[a]++;
    }

    if(mp.size() == 1){
        for(auto x : mp){
            if(x.first == 0){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
            break;
        }
        return 0;
    }

    if((n % 3 != 0) || (mp.size() > 3)){
        cout << "No" << endl;
        return 0;
    }

    if(mp.size() == 2){
        vector<long long> A, B;
        for(auto x : mp){
            A.push_back(x.first);
            B.push_back(x.second);
        }
        if(A[1] == 0){
            swap(A[0], A[1]);
            swap(B[0], B[1]);
        }
        if(A[0] != 0){
            cout << "No" << endl;
            return 0;
        }
        if(B[0] * 2 == B[1]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        return 0;
    }else if(mp.size() == 3){
        vector<long long> A, B;
        for(auto x : mp){
            A.push_back(x.first);
            B.push_back(x.second);
        }
        sort(B.begin(), B.end());
        if(B[0] == B[2] and (A[0] ^ A[1]) == A[2]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        return 0;
    }

    // cout << "No" << endl;

    return 0;
}