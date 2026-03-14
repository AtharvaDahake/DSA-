#include<iostream>
#include<vector>
using namespace std;
void rotatearr(vector<int>& arr,int k){
    vector<int>temp(arr.size());
    for(int i=0;i<arr.size();i++){
        temp[(i+k)%arr.size()]=arr[i];
    }
    arr=temp;
}
void print(vector<int>arr,int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int n=arr.size();
    int k;
    cout<<"enter the value of k ";
    cin>>k;
    print(arr,n);
    rotatearr(arr,k);
    print(arr,n);
    return 0;

}
