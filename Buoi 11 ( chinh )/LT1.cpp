//Quay lui
//Sinh nhi phan

#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int X[100], n;
void in(){
    for(int i = 1; i <= n ; i++){
        cout << X[i];
    }
}
void Try(int i){
    //gan tat ca cac gia tri co the cho bit thu i
    for(int j = 0; j <= 1; j++){
        X[i] = j;
        if(i == n){
            in();
             cout << endl;
        }
        else{
            Try(i + 1);
        }
    }
}
int main(){
    cin >> n;
    Try(1);
}