//phuong phap sinh
//sinh ra hoan vi ke tiep cua hoan vi n phan tu cho truoc
#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];
 void ktiep(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if(i == 0){
        for(int j = 1; j <= n; i++){
            cout << j << ' ';
        }
    }else{
       int j = n;
       while(a[j] < a[i]){
        j--;
       }
       swap(a[i], a[j]);
       reverse(a + i + 1, a + n + 1);
       for(int i = 1; i <= n; i++){
        cout << a[i] << ' ';
       }
    }
 }
 int main(){
    cin >> n;
    for(int i = 1; i <= n ; i++){
        cin >> a[i];
    }
    ktiep();
    return 0;
 }