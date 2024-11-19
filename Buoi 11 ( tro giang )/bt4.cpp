//quay lui nhanh can
//hay liet cac day con cua day sao cho day do co 2 phan tu tro len va tang dan nhung van giu nguyen vi tri ban dau

#include<bits/stdc++.h>
using namespace std;

int n, cnt = 1, a[100], x[100];
vector<string> s;
void ql(int i, int bd){
    for(int j = bd; j <= n; j++){
       if(a[j] > x[i - 1]){
        x[i] = a[j];
        if(i >= 2){
            string s = "";
             for(int u = 1; u <= i; u++){
            s += to_string(x[u]) + " ";
        }
        v.push_back(s)
        cout << endl;
        }
       
        ql(i + 1, j + 1);
       }
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    x[0] = 0;   
    ql(1, 1);
    sort(v.begin(), v.end());
    for(auto x :  v){
        cout << x << endl;
    }
}