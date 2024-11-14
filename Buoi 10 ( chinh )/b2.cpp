//phuong phap sinh
// cho n va k va mot to hop chap kk cua n hay sinh ra cau hinh ke tiep cua to hop nay
#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];

void ktiep(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    a[i] ++;
    for(int j = i + 1; j <= k; j++){
        a[j] = a[j - 1] + 1;
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= k;i++){
        cin >> a[i];
    }
    ktiep();
    if(a[0] != 0){
        for(int i = 1; i <= k; i++){
            cout << a[i] << ' ';
        }
    }
    else{
        for(int i = 0; i < k; i++){
            cout << a[i] << ' ';
        }
    }
}