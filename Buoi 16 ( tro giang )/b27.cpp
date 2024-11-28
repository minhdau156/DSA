//DP
//Xoa chu so
//moi buoc ban duoc so chu so cua so hien hien hoi can bao nhieu buoc de so do bang 0

#include<bits/stdc++.h>
using namespace std;
int tinh (int n){
    if(n == 0){
        return 0;
    }
    int m = n;
    int res = 1e9;
    while(m){
        int r = m % 10;
        if(r != 0){
            res = min(res, tinh(n - r) + 1);
        }
        m /= 10;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
   cout << tinh(n);
    return 0;
}