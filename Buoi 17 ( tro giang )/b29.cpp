//DP
//select array
#include<bits/stdc++.h>
using namespace std;
int F[1001][1001];

int main(){
    int n, m;
    cin >>n >> m;
    int a[n + 1];
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
    } 
    if(a[1] != 0){
        F[1][a[1]] = 1;
    }
    else{
        for(int j = 1; j <= m; j++){
            F[1][j] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        if(a[i] == 0){
            for(int j = 1; j <= m; j++){
                F[i][j] = F[i - 1][j - 1] + F[i - 1][j] + F[i - 1][j + 1];
            }
        }
        else{
            F[i][a[i]] = F[i -1][a[i]] + F[i - 1][a[i] - 1]+ F[i - 1][a[i] + 1];
        }
    }
    int res = 0;
    for(int j = 1; j  <= m; j++){
        res += F[n][j];
    }
    return 0;
}