#include<bits/stdc++.h>


using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int k; cin >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, greater());
    ll sum1 = 0, sum2 = 0;
    if(n - k > k){
        for(int i = 0; i < n - k; i++){
            sum1 += a[i];
        }
        for(int i = n - k; i < n;i++){
            sum2 += a[i];
        }
    }
    else{
        for(int i = 0; i < k; i++){
            sum1 += a[i];
        }
        for(int i = k; i < n; i++){
            sum2 += a[i];
        }
    }
    cout << sum1 - sum2;
    return 0;
}