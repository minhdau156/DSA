#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "aabaaaacaabc";
    int k = 2;
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    if(mp.size() < 3 || mp['a'] < k || mp['b'] < k || mp['c'] < k){
        cout << -1;
        return 0;
    }
    string t = s.substr(0, s.size() / 2);
    string h = s.substr(s.size() / 2);
    string a = h + t;
    int l = 0;
    int r = s.size() - 1;
    while()
    return 0;
}acaabcaa