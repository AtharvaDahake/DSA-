#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp=i;
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>arr[temp]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }arr[j+1]=temp;
    }
}
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }return 0;
}
