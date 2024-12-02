//Graph
//Kiem tra xem do thi co phai la cay k
//do thi la cay khi co n dinh va n - 1 canh va hai dinh chi co mot duong duy nhat

#include<bits/stdc++.h>
using namespace std;
bool used[1005];
int cnt = 0;
int n, m;
vector<int> adj[1005];
void DFS(int u){
    used[u] = true;
    cnt ++;
    for(auto x : adj[u]){
        if(used[x] == false){
            DFS(x);
        }
    }
}
int check(){
    DFS(1);
    if(cnt == n){
        return 1;
    }
    return 0;
}
int main(){
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(m == n - 1 && check() == 1){
        cout << "TRUE";
    }
    else{
        cout << "FALSE";
    }
    return 0;
}