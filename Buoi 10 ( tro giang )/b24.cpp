//thuat toan sinh
//liet ke cac hoan vi lap cua xau

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k, x[100], ok = 0;

void ktao(){
    for(int i = 1; i <= n; i++){
        x[i] = 1;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && x[i] == k){
        x[i] = 1;
        i--;
    }
    if(i == 0){
        ok = 1;
    }
    else{
        x[i]++;
    }
}
int main(){
    cin >> n >> k;
    ktao();
    while(ok == 0){
        for(int i = 1; i <= n; i++){
            cout << x[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}