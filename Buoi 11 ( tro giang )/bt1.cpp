//quay lui
// dem so luong tap hop con thoan man la tong cua mott so k cho truoc

#include<bits/stdc++.h>
using namespace std;
int n, k, s, a[100], cnt = 0 ;
bool check(){
    long long sum = 0;
    for(int f = 1; f <= k ; f++){
        sum += a[f];
    }
    if(sum == s){
        return true;
    }
    return false;
}
void ql(int i){
    for(int j = a[i - 1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if(i == k){
            
            if(check() == 1){
                cnt++;
            }
        }
        else{
            ql(i + 1);
        }
    }
}
int main(){
    cin >> n >> k >> s;
   
    ql(1);
    cout << cnt;
}