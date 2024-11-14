//phuong phap sinh
//sinh ra to hop chap k cua n
#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], final = 0;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = n;
    while ( i >= 1 && a[i] == n -  k + i){
        i--;
    }
    if(i == 0){
        final = 1;
    }
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
        for(int i = 1; i <= n; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        sinh();
    }
    return 0;
}