//Graph
//tim nhom truong 

#include<bits/stdc++.h>
using namespace std;
int n , m;
int a[1005];
int visited[1005];
int bac[1005];
vector<int> adj[1005];
int captain = 1001;
void DFS(int u){
    if(bac[u] > bac[captain] || bac[u] == bac[captain] && u < captain){
        captain = u;
    }
    visited[u] = 1;
    for(auto x : adj[u]){
        if(visited[x] == 0){
            DFS(x);
        }
    }
}
int main(){
    bac[1001] = 0;
    cin >> n >> m;
    while(m--){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        bac[x]++;
        bac[y]++;
    }
    vector<int> ans;
    for(int i = 1; i <= n ; i++){
        if(visited[i] == 0){
            captain = 1001;
            DFS(i);
            ans.push_back(captain);
        }
    }
    for(auto x : ans){
        cout << x << ' ';
    }
    return 0;
}