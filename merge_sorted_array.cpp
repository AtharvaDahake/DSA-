#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int n,int arr1[],int m,int arr2[]){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m){
        if(arr[i]<arr1[j]){
            arr2[k++]=arr[i++];
            // k++;
            // i++;
        }else{
            if(arr[i]>arr1[j]){
                arr2[k++]=arr1[j++];
                // k++;
                // j++;
            }
        }
    }while(i<n){
        arr2[k++]=arr[i++];
        // k++;
        // i++;
    }
    while(j<m){
        arr2[k++]=arr[j++];
        // k++;
        // j++;
    }
}

void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<< ans[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[5]={1,3,5,7,9};
    int arr1[4]={2,4,6,8};
    int arr2[8]={0};
    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }cout<<endl;
    for(int i=0;i<4;i++){
        cout<< arr1[i]<<" ";
    }cout<<endl;
    merge(arr,5,arr1,4,arr2);
    print(arr2,9);
    return 0;
}
