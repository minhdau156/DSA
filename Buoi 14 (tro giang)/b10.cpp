//chia va tri
//cho mang gom so 0 va so 1 cac so 0 luon dung truoc cac so 1 hay tim so cac so 0 trong mang voi thoi gain o(log(n))

#include<bits/stdc++.h>

using namespace std;

int findPos(int a[], int n){
    int pos = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == 1){
            r = mid - 1;
        }
        else{
            pos = mid;
            l = mid + 1;
        }
    }
    return pos;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << findPos(a, n) + 1;
}
