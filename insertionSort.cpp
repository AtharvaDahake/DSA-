#include<iostream>
#include<vector>
using namespace std;

void inserting(vector<int> &arr,int n){

    for(int i=1;i<n;i++){

        int temp = arr[i];

        int j=i-1;
        for( ;j>=0;j--){

            if(arr[j] > temp){
                arr[j+1] = arr[j];

            }else{
                break;
            }
        }
        arr[j+1] = temp;
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
    inserting(arr,size);
    print(arr,size);
    
    return 0;

}
