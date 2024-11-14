//Phuong Phap sinh 
//Sinh xâu nhị phân

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100], final = 0;
void ktao(){
    //khoi tao cau hinh dau tien
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n; // bat dau tu bit cuoi cung
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    } // kiem tra xem bit do co bang 1 hay khong neu bang 1 thi cho no bang 0
    if(i == 0){
        final = 1; // day la cau hinh cuoi cung
    }
    else{
        a[i] = 1; // cho bit 0 dau tien tinh tu ben phai thanh 1
    }
}
int main(){
    cin >> n;
    while(final == 0){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}