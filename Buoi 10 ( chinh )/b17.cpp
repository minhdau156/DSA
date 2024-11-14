//phuong phap sinh
//sinh ra boi nho nhat cua so cho truoc chi gom so 0 va so 9 
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll a[505];
vector<ll> res;
int ok = 0;
void sinh(string &s){
    int i = s.size() - 1;
    while( i >= 0 && a[i] == 9){
        a[i] == 0;
        i--;
    }
    if(i == - 1){
        ok = 1;
    }
    else{
        a[i] = 9;
    }
}
int main(){
    string s(10, '0');
    ok = 0;
    sinh(s);
    while(ok == 0){
        res.push_back(stoll(s));
        sinh(s);
    }
    for(int i = 1; i <= 500; i++){
        for(ll x : res){
            if(a[i] == 0 && x % i == 0){
                a[i] = x;
            }
        }
    }
}