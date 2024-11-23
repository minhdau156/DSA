//tham lam
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int grades[n];
    for(int i = 0; i < n; i++ ){
        cin >> grades[i];
    }
    int sumOfCandles = 0;
    int curCandles = 1;
    sumOfCandles += curCandles;
    for(int i = 1; i < n; i++){
        if(grades[i] > grades[i - 1]){
            curCandles++;
        }
        else{
            curCandles = 1;
        }
        sumOfCandles += curCandles;
    }
    cout << sumOfCandles;
    
}