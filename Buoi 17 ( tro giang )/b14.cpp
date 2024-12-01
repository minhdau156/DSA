//Graph
// tim duong di trong do thi vo huong bang DFS

#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int visited[1001];
void DFS(int i){
    visited[i] = 1;
    for(auto x : adj[i]){
        if(visited[x] == 0){
            DFS(x);
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    while(m -- ){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n ; i++){
        sort(adj[i].begin(), adj[i].end());
    }
    int q;
    cin >> q;
    while(q --){
    int s, t;
    cin >> s >> t;
    DFS(s);
    if(visited[t] == 1){
        cout << 1;
    }
    else{
        cout << -1;
    }
    }
    return 0;
}