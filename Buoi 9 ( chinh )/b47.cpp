// Factory Machine
// tim thoi gian ngan nhat de tao ra t san pham trong do cho n may va n may lam viec dong thoi

#include<bits/stdc++.h>
#define ll  long long
using namespace std;
bool check(int a[], int n, int t, ll time){
    ll dem = 0;
    for(int i = 0;i < n; i++){
        dem += time / a[i];
        if(dem >= t) return true;
    }
    return dem >= t;
}
int main(){
    int n, t; cin >> n >> t;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    ll left = 0, right = 1ll * (*min_element(a, a + n)) * t;
    ll ans = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, n, t, mid)){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans;
    return 0;
}