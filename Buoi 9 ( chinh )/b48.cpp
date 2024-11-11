//cho n thanh domino co chieu rong la a, chieu dai la b hay tim hinh vuong co canh nho nhat sao cho co the xep n 
//thanh domino vao hinh vuong
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(int a, int b, int n, ll length){
    ll dem = (length / a) * (length / b);
    return dem >= n;
}
int main(){
    int a, b, n;
    cin >> a >> b >> n;
    ll left = max(a, b);
    ll right = max(a, b) * n;
    ll ans = 0;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a, b, n, mid)){
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
