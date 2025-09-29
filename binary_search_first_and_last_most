#include<iostream>
using namespace std;
int binafmost(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e){
        m=s+(e-s)/2;
        if(arr[m]==key){
            if (arr[m-1]==key){
                e=m-1;
            }else{
                return m;
            }}
        else if(arr[m]<key){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
        
}
int binalmost(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e){
        m=s+(e-s)/2;
        if(arr[m]==key){
            if(arr[m-1]==key){
            s=m+1;
            }else{
                return m;
            }
               
        } 
        else if(arr[m]>key){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }return m;
}
int main(){
    int arr[11]={1,2,2,2,2,2,2,3,3,3,4};
    int ser=binafmost(arr,11,3);
    int ch=binalmost(arr,11,3);
    cout<<ser<<endl;
    cout<<ch<<endl;
}

