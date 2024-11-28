//DP
//cho mang gom n phan tu tinh tong cac phan tu cua mang con khac nhau va iet ke cac tong ay theo thu tu tang dan

#include<bits/stdc++.h>
using namespace std;
 int a[1001];
 int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
    }
    bool F[sum + 1];
    memset(F, false, sizeof(F));
    for(int i = 1; i <= n ; i++){
        for(int j = sum; j >= 1; j--){
            if(j >= a[i]){
                F[j] = F[j] || F[j - a[i]];
            }
        }
    }
    for(int i = 0 ; i <= sum; i++){
        if(F[i] == true){
            cout << i << ' ';
        }
    }
    return 0;
 }