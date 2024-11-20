//tham lam

#include<bits/stdc++.h>


using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    int a[n];
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int &x : a){
        cin >> x;
        pq.push(x);
    }
    int mod = 1e9 + 7;
    ll res = 0;
    while(pq.size() >= 1){
        int t1 = pq.top(); pq.pop();
        int t2 = pq.top(); pq.pop();
        res += (t1 + t2);
        res %= mod;
        pq.push(t1 + t2);
    }
    cout << res;
}