//chia va tri
//luy phan nhi phan nghich dao

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int mod = 10e9 + 7;
ll powMod(int a, int n){
    if(n == 0){
        return 1;
    }
    ll x = powMod(a, n / 2);
    if(n % 2 == 0){
        return x * x % mod;
    }
    return ((a % mod) * (x * x % mod)) % mod;
}
int main(){
    int n, k;
    cin >> n >> k;
    return 0;
}