#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    map<char, char> mp;
    mp['A'] = 'T';
    mp['C'] = 'G';
    mp['T'] = 'A';
    mp['G'] = 'C';

    char b;
    cin >> b;
    cout << mp[b] << endl;

    return 0;
}