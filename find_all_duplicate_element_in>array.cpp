#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> duplicate(vector<int> &arr){
    int n=arr.size();
    vector<int> result;
    sort(arr.begin(), arr.end());
    for(int i=1;i<n;i++){
    if(arr[i]==arr[i-1])
    result.push_back(arr[i]);
    }
    return result;
}

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    vector<int> arr={4,3,2,7,8,2,3,1};
    vector<int> ans=duplicate(arr);
    print(ans);
    return 0;
}
