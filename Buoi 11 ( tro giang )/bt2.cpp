//quay lui
// cho mang A[] va so k hay in ra cac mang con ma tong cua chung bang k theo thu tu tu dien tang dan neu khong co in ra -1
#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], x[100];
void ql(int i, int bd, int sum){
    for(int j = bd; j <= n; j++){
        x[i] = a[j];
        if(sum + a[j] == k){
            for(int u = 1; u <= i; u++){
                cout << x[u] << ' ';
            }
            cout << endl;
        }
        else if(sum + a[j] < k){
            ql(i + 1, j + 1, sum + a[j]);
        }
    }
}
int main(){
   cin >> n >> k;
   for(int u = 1; u <= n;u++){
    cin >> a[u];
   }
   ql(1, 1, 0);
    return 0;
}