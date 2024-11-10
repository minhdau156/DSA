#include<bits/stdc++.h>

using namespace std;
int tcs(int x){
    int res = 0;
    while(x != 0){
        res += x % 10;
        x /= 10;
    }
  
    return res;
}
bool cmp(int x, int y){
    if(tcs(x) == tcs(y)){
        return x > y;
    }
    return tcs(x) > tcs(y);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    } 
    sort(a, a + n, cmp);
    for(auto x : a){
        cout << x << " ";
    }
}