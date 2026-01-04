#include<iostream>
using namespace std ;
void selectsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
            minindex=j;
            }
        }swap(arr[minindex],arr[i]);
    }
}
int main(){
    int n;
    cout << " enter the size of array : ";
    cin >>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout << endl;
    selectsort(arr,n);
    cout << "Sort array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
