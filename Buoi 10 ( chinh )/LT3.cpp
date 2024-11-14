//Phuong phap sinh
//Sinh hoan vi
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int n, a[100], final = 0;
void ktao(){
    //khoi tao cau hinh dau tien
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = n - 1;
    //di tim vi tri i dau tien ma a[i] < a[i + 1]
    while(i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if(i == 0){ // cau hinh cuoi cung ( cau hinh giam dan )
        final = 1;
    }
    else{
        //di tim a[j] > a[i] trong doan tu i + 1 toi n, nhung phai nho nhat co the
        int j = n;
        while(a[i] > a[j]){
            j--; // duyet tu phai sang trai tim so lon hon a[i] dau tien thi ngung  vi luc do trong doan i + 1 toi n la giam dan
        }
        swap(a[i], a[j]);// doi vi tri cua hai gia tri cho nhau
        reverse(a + i + 1, a + n + 1); // sap xep tang dan tu trai sang phai trong doan i + 1 -> n
        // ta duoc cau hinh tiep theo lon hon cau hinh hien tai va nho nhat
    }
}
int main(){
    cin >> n;
    ktao();
    while(final == 0){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
    sinh();
    }
    return 0;
}