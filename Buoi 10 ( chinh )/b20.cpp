//phuong phap sinh
//in ra xau nhi phan thuan nghich co do dai chan khong qua n

#include<bits/stdc++.h>

using namespace std;

int n, a[100], final;
void sinh(){
    int i = n;
    while( i >= 1 && a[i] == 1){
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
int main(){
    int k; cin >> k;
    vector<string> v;
    for(n = 1; n <= k / 2; n++){
        final = 0;
        while(final == 0){
            string s = "";
            for(int i = 1; i <= n; i++){
                s += to_string(a[i]);
            }
            for(int i = n; i>= 1; i++){
                s += to_string(a[i]);
            }
            v.push_back(s);
            cout << endl;
            sinh();
        }
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << endl;
    return 0;
}