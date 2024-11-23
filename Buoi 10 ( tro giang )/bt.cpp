#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        while(l = r){
            if(numbers[l] + numbers[r] == target){
                numbers.insert(numbers.begin(), numbers[r]);
                numbers.insert(numbers.begin(), numbers[l]);
                break;
            }
            else if(numbers[l] + numbers[r] > target){
                r--;
            }
            else{
                l++;
            }
        }
        numbers.erase(numbers.begin() + 2, numbers.end());
        return numbers;
    }
    int main(){
        vector<int> v = {2,7,11,15};
        int target = 9;
        twoSum(v, target);
        return 0;
    }