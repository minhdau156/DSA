//DP
//tim canh cua hinh vuong lon nhat trong ma tran chi co hai gia tri la 1 va 0;

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    int F[n + 1][m + 1];
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int res = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 1){
                F[i][j] = min({F[i - 1][j], F[i][j - 1], F[i - 1][j - 1]}) + 1;
            }
            else{
                F[i][j] = 0;
            }
            res = max(res, F[i][j]);
        }
    }
    cout << res;
    return 0;
}