#include<iostream>
using namespace std ;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }if(swapped == false) {
            //already sorted
            break;
        } 
    }
}
int main(){
    int n;
    cout << "enter the size of array : ";
    cin >>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout << endl;
    bubbleSort(arr,n);
    cout << "Sort array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
