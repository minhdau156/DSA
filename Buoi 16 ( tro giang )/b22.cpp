//DP
//Sum substring
//cho mot so n duoc bieu dien duoi dang xau ki tu ban hay tinh tong cua tat ca cac so tao boi lien tiep cac xau con lien tiep
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.length();
    s = "0" + s;
    int F[n + 1] = {0};
    long long sum = 0;
    for(int i = 1; i <= n ; i++){
        F[i] = F[i - 1] * 10 + i * (s[i] - '0');
        sum += F[i];
    }
    cout << sum;
    return 0;
}