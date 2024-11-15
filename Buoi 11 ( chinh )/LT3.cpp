//Quay lui
//Sinh hoan vi
#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int X[100], n, daxet[100];
void in(){
    for(int i = 1; i <= n ; i++){
        cout << X[i];
    }
}
void Try(int i){
    //Gan tat ca nhung gia tri co the cho bit thu i
    for(int j = 1; j <= n ;j++){
        //Kiem tra xem co the gan gia tri j cho X[i]
        if(daxet[j] == 0){
            X[i] = j;
            daxet[j] = 1;
            if(i == n){
                in(); cout << endl;
            }
            else{
                Try( i + 1);
            }
            //Bo ghi nhan
            daxet[j] = 0;
        }
        
    }
}
int main(){
    cin >> n;
    Try(1);
    return 0 ;

}