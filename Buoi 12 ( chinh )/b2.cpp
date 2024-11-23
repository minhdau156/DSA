//quay lui
// duong di cua chuot trong me cung nhung chi duoc di xuong va sang phai

#include<bits/stdc++.h>
using namespace std;

int a[100][100], n;
string s;

void Try(int i, int j){
    if(i == n && j == n){
        cout << s << endl;
    }
    else{
        if(i + 1 <= n && a[i + 1][j] == 1){
            a[i + 1][j] = 0;
            s += "D";
            Try(i + 1, j);
            a[i + 1][j] = 1;
            s.pop_back();
        }
        if(j + 1 <= n && a[i][j + 1] == 1){
            a[i][j + 1] = 0;
            s += "R";
            Try(i, j + 1);
            a[i][j + 1] = 1;
            s.pop_back();
        }
    }
}