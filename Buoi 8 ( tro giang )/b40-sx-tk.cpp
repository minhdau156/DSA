#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k = 1;
    int tmp = k;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(i == n - 1&& k <= n){
            i = 0;
            cnt ++;
        }
        if(a[i] == k){
            k++;
        }
    }
    cout << cnt;
    return 0;
}
