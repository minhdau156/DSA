//chia va tri
//tim chu so k cua so thu n khi gap doi day so


#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int ans ;
void solve(int k, int n){
    if(k == pow(2, n - 1)){
        ans = n;
    }
    else if(k > pow(2,n - 1)){
        solve(k - pow(2, n - 1), n - 1);
    }
    else{
        solve(k, n - 1);
    }
        
}
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    solve(k, n);
    cout << ans;
    return 0;
}