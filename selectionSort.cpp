#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int> &arr,int n){

    for(int i=0;i<n-1;i++){

        int minindex = i;

        for(int j=i+1;j<n;j++){
            
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}

void print(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

    vector<int> arr={4,56,72,4,2,234,232,5,34,563,423,34,5456,23,123457,45,634};
    int size=arr.size();

    cout<<"befor sorting ";
    print(arr,size);
    cout<<endl;
    
    cout<<"after sorting ";
    selectionsort(arr,size);
    print(arr,size);
    
    return 0;

}
