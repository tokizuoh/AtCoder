#include <bits/stdc++.h>
using namespace std;

const int MAX = 510;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int h, w;
    cin >> h >> w;

    char C[MAX][MAX];
    bool seen[MAX][MAX];

    stack<pair<int, int>> st;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            seen[i][j] = false;
            cin >> C[i][j];
            if(C[i][j] == 's'){
                st.push({i, j});
            }
        }
    }

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while(!st.empty()){
        pair<int, int> t = st.top();
        st.pop();
        for(int i = 0; i < 4; i++){
            int nx, ny;
            nx = t.first + dx[i];
            ny = t.second + dy[i];
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            if(C[nx][ny] == '#'){
                continue;
            }
            if(C[nx][ny] == 'g'){
                cout << "Yes" << endl;
                return 0;
            }
            if(seen[nx][ny]){
                continue;
            }
            seen[nx][ny] = true;
            st.push({nx, ny});
        }
    }

    cout << "No" << endl;

    return 0;
}