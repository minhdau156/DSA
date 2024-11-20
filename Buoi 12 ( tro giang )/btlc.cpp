#include<bits/stdc++.h>
using namespace std;

bool isValid(int total[], int window[], int k){
    for(int i = 0; i < 3; i++){
        if(total[i] - window[i] < k){
            return false;
        }
    }
    return true;
}
int main(){
    int k = 2;
    string s = "aabaabacaabc";
    if(k == 0){
        return 0;
    }
    int n = s.length();
    int freq[3] = {};
    for(char x : s){
        freq[x - 'a']++;
    }
    for(int count : freq){
        if(count < k){
            return -1;
        }
    }
    int window[3] = {};
    int maxLength = 0;
    int left = 0;
    for(int right = 0; right < n;
    right ++){
        window[s[right] - 'a']++;
        while(left <= right && !isValid(freq, window, k)){
            window[s[left] -'a']--;
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }
    cout << n - maxLength;
}