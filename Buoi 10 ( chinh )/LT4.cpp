//Phuong phap sinh
//Sinh phan hoach
#include<bits/stdc++.h>

using namespace std;
using ll =long long;

int n, a[100], final, cnt;

void ktao(){
    cnt = 1;
    a[1] = n;
}
void sinh(){
    //bat dau tu so hang cuoi cung va tim so hang dau tien != 1
    int i = cnt;
    while( i >= 1 && a[i] == 1){
        i--;
    }
    if(i == 0){
        final = 1;
    }
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i]; // d gap may lan a[i]
        int r = d % a[i];
        for(int j = 1; j <= q; j++){
            a[i + j] = a[i]; // them q so a[i] vao sau va tang cnt len
            ++cnt;
        }
        if( r != 0){ // them r vao sau cung 
            a[cnt + 1] = r;
            cnt ++;
        }
    }
}
int main(){
    cin >> n;
    ktao();
    while(final == 0){
        for(int i = 1; i <= cnt ;i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        sinh();
    }
    return 0;
}