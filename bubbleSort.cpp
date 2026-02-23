#include<iostream>
#include<vector>
using namespace std;


void bubblesort(vector<int> &arr,int n){
    
    // for(int i=1;i<n;i++){
    for(int i=0;i<n-1;i++){

        // for(int j=0;j<n-i;j++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){

            swap(arr[j], arr[j+1]);

            }
        }
    }
}

void print(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    vector<int> arr={4,56,72,4,2,234,232,5,34,563,423};
    int size=arr.size();

    cout<<"befor sorting ";
    print(arr,size);
    cout<<endl;
    
    cout<<"after sorting ";
    bubblesort(arr,size);
    print(arr,size);
    
    return 0;

}
