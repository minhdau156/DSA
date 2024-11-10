//tong hinh vuong con 3x3 lon nhat
//dung mang cong don tren mang hai chieu
#include<bits/stdc++.h>

using namespace std;

int a[105][105], F[105][105];
int n;
int max(int x, int y){
    if(x > y){
        return x;
    }
    return y;
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n; j++){
            F[i][j] = F[i - 1][j] + F[i][j - 1] - F[i - 1][j - 1] + a[i][j];
        }
    }
    int res = 0;
    for(int i = 3; i <= n; i++){
        for(int j = 3; j <= n; j++){
            int sum = F[i][j] - F[i][j - 3] - F[i - 3][j] + F[i - 3][j - 3];
            res = max(res, sum);
        }
    }
    cout << res;
    return 0;
}