//May Photo
// can it nhat bao nhieu giay de photo n ban sao voi hai may co thoi gian photo lan luot la x va y

#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n, ll x, ll y, ll time){
    time -= min(x, y);
    return time / x + time / y >= n - 1;
}
int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll left = 0, right = 1ll * min(x, y) * n;
    int ans = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(n, x, y, mid)){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}