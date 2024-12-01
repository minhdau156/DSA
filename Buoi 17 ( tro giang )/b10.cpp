//graph
//duyet DFS tren do thi co huong
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int visited[1001];
void DFS(int i){
    cout << i << ' ';
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
    
    while(m --){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(),adj[i].end());
    }
    DFS(1);
    return 0;
}