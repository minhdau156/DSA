//tham lam
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> mp;
    for(int i = 0 ; i < s.size(); i++){
        mp[s[i]]++;
    }
    int cnt = 0;
    for(auto x : mp){
        if(x.second % 2 != 0){
            cnt ++;
        }
    }
    if((cnt - 1) % 2 == 0){
        cout << 1;
    }
    else{
        cout << 0;
    }

}