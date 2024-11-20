//tham lam
#include<bits/stdc++.h>


using namespace std;
using ll = long long;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int n; cin >> n;
    pair<int, int> a[n];
    for(int i  = 0; i< n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cmp);
    int cnt = 1, t = a[0].second;
    for(int i = 1; i < n; i++){
        if(a[i].first > t){
            cnt++;
            t = a[i].second;
        }
    }
    cout << cnt;
    return 0;
}