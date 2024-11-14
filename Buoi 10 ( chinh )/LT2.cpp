//Phuong phap sinh
//sinh to hop chap k cua n

#include<bits/stdc++.h>

using namespace std;
 using ll = long long;

 int n, k, a[100], final = 0;

 void ktao(){
    //khoi tao cau hinh dau tien
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
 }
 void sinh(){
    int i = k;
    //xac dinh tai vi tri i thi a[i] da dat gia tri lon nhat ( n - k + i) chua ?
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    
    if(i == 0){
        final = 1;
    }// cau hinh cuoi cung
    //a[i] chua dat gia tri lon nhat thi minh tang a[i] va nhung so dang sau se tang lan luot 1 don vi
    else{
        a[i]++;
        for(int j = i + 1; j <= n; j++){
            a[j] = a[j - 1] + 1;
        }
    }
 }
 int main (){
    cin >> n >> k;
    ktao();
    while(final == 0){
        for(int i = 1; i <= k; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
 }