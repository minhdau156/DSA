//phuong phap sinh
//in ra xau HAHA chi gom  H va A
# include<bits/stdc++.h>
using namespace std;

int n,a[100], final = 0;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n ;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0){
        final = 1;
    }
    else{
        a[i] = 1;
    }
}
bool check(){
    if(a[1] == 0 || a[n] == 1){
        return false;
    }
    for(int i = 1; i <= n - 1; i++){
        if(a[i] == 1 && a[i + 1] == 1){
            return false;
        }
    }
    return true;
}
int main(){
    
    cin >> n;
    ktao();
    while(final == 0){
        if(check()){
            for(int i = 1; i <= n; i++){
                if(a[i] == 1){
                    cout << 'H';
                }
                else{
                    cout << 'A';
                }
            }
            cout << endl;
        }
       
        sinh();
    }
    return 0;
}