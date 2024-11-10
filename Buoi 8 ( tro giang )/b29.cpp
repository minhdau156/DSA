// duong di cua quan tinh
#include <bits/stdc++.h>

using namespace std;

 int a[105][105] ;
 int n, m, s, t;
   int cnt = 0; 
int dx[] = {-1, 1, -1, 1};
int dy[] = {-1, -1, 1, 1};
// ham duong di cua quan tinh
void loang(int i, int j){
    a[i][j] = 1;
    cnt++;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 0){
            loang(i1, j1);
        }
    }
} 
int main(){
 
    cin >> n >> s >> t;
    m = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    loang(s, t);
   cout << cnt;
    return 0;
}