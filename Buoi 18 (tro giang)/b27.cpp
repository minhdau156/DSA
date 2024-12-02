//Graph
//bien the dem so tplt trong do thi

#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> adj[1005];
int visited[1005];
int cnt = 0;
void DFS(int u){
    visited[u] = 1;
    cnt++;
    for(auto x : adj[u]){
        if(visited[x] == 0){
            DFS(x);
        }
    }
}
int main(){
    cin >> n >> m;
    while(m -- ){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int res = 0;
    for(int i = 1; i <= n ; i++){
        if(visited[i] == 0){
            cnt = 0;
            DFS(i);
            res = max(res,cnt);
        }
    }
    cout << res;
}