#include<bits/stdc++.h>

using namespace std;
 int main(){
    string s;
    cin >> s;
    s = s + '0';
    vector<int> v;
    int cnt = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '1'){
            cnt++;
        }
        else{
            if(cnt != 0){
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    int res = 0;
    for(int i = 0; i < v.size(); i += 2){
        res += v[i];
    }
    cout << res;
    return 0;
 }