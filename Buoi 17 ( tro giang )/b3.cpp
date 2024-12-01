//Graph
//chuyentu danh sach canh sang danh sach ke trong do thi co huong

#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int main(){
    int n, m; cin >> n >> m;
    while(m --){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i = 1; i <= n ; i++){
        cout << i << " : ";
        sort(adj[i].begin(), adj[i].end());
        for(int j = 0 ; j < adj[i].size(); j++){
            cout << adj[i][j] << ' '; 
        }
        cout << endl;
    }
    return 0;
}