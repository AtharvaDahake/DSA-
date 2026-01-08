#include<iostream>
#include<vector>
using namespace std;
bool rotate(vector<int>& nums){
    int count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>nums[i+1]%n){
            count++;
        }
    }
    return count<=1;
}
