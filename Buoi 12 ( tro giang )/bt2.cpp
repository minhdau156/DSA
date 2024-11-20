#include<bits/stdc++.h>


using namespace std;
using ll = long long;
void xuly1(string &a){
    for(int i = 0; i <= a.size(); i++){
        if(a[i] == '5'){
            a[i] = '6';
        }
    }
}
void xuly2(string &b){
    for(int i = 0; i <= b.size(); i++){
        if(b[i] == '6'){
            b[i] = '5';
        }
    }
}
int main(){
    string a, b;
    cin >> a;
    cin >> b;
    string tmp1 = a, tmp2 = b, tmp3 = a, tmp4 = b;
    xuly1(tmp1);
    xuly1(tmp2);
    xuly2(tmp3);
    xuly2(tmp4);
    ll max = stoll(tmp1) + stoll(tmp2);
    ll min = stoll(tmp3) + stoll(tmp4);
    cout << max << ' ' << min;
}