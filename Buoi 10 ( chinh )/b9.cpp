// phuong phap sinh
// sinh ra cac cau hinh sao cho tong cua chung bang n cho truoc va cac so ay phai nho hon n
#include<bits/stdc++.h>
using namespace std;

int n, a[100], final = 0, cnt;

void ktao(){
    cnt = 1;
    a[1] = n;
}
void sinh(){
    int i = cnt;
    while( i >= 1 && a[i] == 1){
        i--;
    }
    if( i == 0){
        final = 1;
    }
    else{
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        for(int j = i + 1; j <= i + q; j++){
            a[j] = a[i];
            cnt ++;
        }
        if(r != 0){
            cnt ++;
            a[cnt] = r;
        }
        
    }
}
int main(){
    cin >> n;
    ktao();
    while(final == 0){
        for(int i = 1; i <= cnt; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        sinh();
    }
    return 0;
}