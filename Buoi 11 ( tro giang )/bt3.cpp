//quay lui
//tim ra so to tien it co the tra
#include<bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100], ans = INT_MAX;
void ql(int i, int bd, int sum){
    for(int j = bd; j <= n; j++){
        x[i] = a[j];
        if(sum + a[j] == s){
            ans = min(ans, i);
        }
        else if(sum + a[j] < s){
            ql(i + 1, j + 1, sum + a[j]);
        }
    }

}