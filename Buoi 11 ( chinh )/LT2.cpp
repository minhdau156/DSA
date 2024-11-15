//QUay lui
//sinh to hop chap k cua n
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int X[100], n, k;
void in(){
    for(int i = 1; i <= k ; i++){
        cout << X[i];
    }
}
void Try(int i){
    //gan tat ca gia tri cho bit thu i
    for(int j = X[i - 1] + 1; j <= n - k + i;j++){
        X[i] = j;
        if(i == k){ // xong cau hinh va in ra no
            in();
            cout << endl;
        }
        else{
            Try( i + 1);
        }
    }
}
int main(){
    cin >> n >> k;
    Try(1);
}