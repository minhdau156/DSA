//Graph
//DFS
//tim so phong trong toa nha
#include<bits/stdc++.h>
using namespace std;
int n, m;
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

char a[1005][1005];
void DFS(int i, int j){
    a[i][j] = '#';
    for(int k = 0 ; k < 4; k ++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == '.'){
            DFS(i1, j1);
        } 
    }
}
int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == '.'){
                cnt ++;
                DFS(i, j);
            }
        }
    }
    cout << cnt;
    return 0;
}