//quay lui nhanh can
//in ra cac to hop co tong bang x trong do co the su dung mot phan tu nhieu lan

#include<bits/stdc++.h>
using namespace std;
int n, a[100], x[100], sum = 0, s;
void ql(int i, int bd, int sum){
    if(i > n){
        return;
    }
    for(int j = bd; j <= n; j++){
        x[i] = a[j];
        if(sum + a[j] <= s){
            if(sum + a[j] == s){
                for(int u = 1; u <= i; u++){
                    cout << x[u] << ' ';
                }
                cout << endl;
            }
            else{
                ql(i + 1, j , sum + a[j]);
            }
        }
    }
}
int main(){
    cin >> n; 
    cin >> s;
    for(int l = 1; l <= n; l++){
        cin >> a[l];
}
    ql(1, 1, 0);
    return 0;
}