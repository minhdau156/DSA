#include<bits/stdc++.h>


using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int mod = 1e9 + 7;
    ll res = 0;
    for(int i = 0; i< n; i++){
        res += 1ll * a[i] *i;
        res %= mod;
    }
    cout << res;
}