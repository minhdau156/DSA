//phuong phap sinh
//dem xem trong cau hinh ke tiep thi co bao nhieu so duoc thay ra
#include<bits/stdc++.h>

using namespace std;

int n, k, final = 0; int a[100];
void ktiep(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        cout << n;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k ;j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    cin >> n >> k;
    int b[100];
    for(int i = 1; i <= k; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    ktiep();
    set<int> se;
    for(int i = 1; i <= k; i++){
        se.insert(a[i]);
    }
    int ans = 0;
    for(int j = 1; j <= k; j++){
        if(se.count(b[j]) == 0){
            ans++;
        }
    }
    cout << ans;
    return 0;
}