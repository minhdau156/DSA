#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 1], d[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    d[0] = 1e9;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(d[a[i] - 1] > d[a[i]]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
