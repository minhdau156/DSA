// quay lui nhanh can

#include<bits/stdc++.h> 
using namespace std;

int n, x[100], used[50];
void ql(i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0 && abs(x[i - 1] - j) != 1){
            x[i] = j;
            used[x[i]] = 1;
            if(i == n){
                for(int u = 1; u <= i; u++){
                    cout << x[u] << ' ';
                }
            }
            else{
                ql[i + 1];
            }
        }
    }
}
int main(){
    cin >> n;
    x[0] = INT_MIN;
    ql(1);
    
}