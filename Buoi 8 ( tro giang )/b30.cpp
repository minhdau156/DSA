// duong di cua quan xe
#include <bits/stdc++.h>

using namespace std;

int n, m, s, t, a[105][105];
int cnt = 0;
//ham duong di cua quan xe nhieu o
void spread(int i, int j){
    a[i][j] == 1;
    cnt ++;
    for(int i1 = i - 1; i >= 1; i--){
        if(a[i1][j] == 0){
            spread(i1, j);
        }else{
            break;
        }
    }
    for(int i1 = i + 1; i <= n; i++){
        if(a[i1][j] == 0){
            spread(i1, j);
        }
        else{
            break;
        }
    }
    for(int j1 = j - 1; j >= 1 ; j--){
        if(a[i][j1] == 0){
            spread(i, j1);
        }
        else{
            break;
        }
    }
    for(int j1 = j + 1; j <= m; j++){
        if(a[i][j1] == 0){
            spread(i, j1);
        }
        else{
            break;
        }
    }
}
//ham duong di cua quan xe bon o xung quanh
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};
void spread1(int i, int j){
    a[i][j] == 1;
    cnt ++;
    for(int k = 0; k < 4 ; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 0){
            spread1(i1, j1);
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
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m ; j++){
            if(a[i][j] == 0){

            }
        }
    }
}