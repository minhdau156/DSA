//tham lam
// tim so nho nhat co tong bang s va co do dai d

#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, d;
    cin >> s >> d;
    if(s > d * 9){
        cout << -1;
        return 0;
    }
    string ans = "";
    while(d >= 1){
        if(s > 9){
            ans += '9';
            s -= 9;
        }
        else if(s <= 9 && d == 1){
            ans += to_string(s);
            s -= s;
        }
        else if(s <= 9 && d != 1){
            ans += to_string(s - 1);
            s -= (s - 1);
        }
        else if(s == 1 && d != 1){
            ans += '0';
        }
        else{
            ans += '1';
        }
        d--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}