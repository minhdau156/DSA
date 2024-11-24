//chia va tri
//tim gia tri khac nhau cua hai mang a va b co lan luot n va n - 1 phan tu

#include<bits/stdc++.h>

int findValue(int a[], int b[], int n){
    int l = 0, r = n - 2, res = -1;
    
    while(l <= r){
        int mid = (l + r)/2;
        if(a[mid] == b[mid]){
            l = mid + 1;
        }
        else{
            res = mid;
            r = mid - 1;
        }
    }
    return res;
}
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], b[n - 1];
    for(int i = 0 ; i < n; i++){
        cin>> a[i];
    }
    for(int i = 0 ; i < n - 1; i++){
        cin >> b[i];
    }
    cout << findValue(a, b, n) + 1;
    return 0;
}