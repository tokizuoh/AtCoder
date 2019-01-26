#include <bits/stdc++.h>
using namespace std;

int h, w, sx, sy;
const int MAX = 510;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

char C[MAX][MAX];

bool seen[MAX][MAX];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> h >> w;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> C[i][j];
            if(C[i][j] == 's'){
                sx = i;
                sy = j;
            }
        }
    }


    stack<pair<int, int>> st;
    st.push({sx, sy});
    while(!st.empty()){
        pair<int, int> t = st.top();
        st.pop();
        for(int i = 0; i < 4; i++){
            int nx, ny;
            nx = dx[i] + t.first;
            ny = dy[i] + t.second;
            if(nx < 0 or ny < 0 or nx >= h or ny >= w){
                continue;
            }
            if(C[nx][ny] == '#' or seen[nx][ny]){
                continue;
            }
            if(C[nx][ny] == 'g'){
                cout << "Yes" << endl;
                return 0;
            }
            seen[nx][ny] = true;
            st.push({nx, ny});

            /*
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    cout << C[i][j] << ' ';
                }
                cout << endl;
            }
            cout << "----------------" << endl;
            */
        }
    }

    cout << "No" << endl;

    return 0;
}