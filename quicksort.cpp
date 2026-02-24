#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int s,int e){

    int pivot=arr[s];

    int cnt=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
// place pivot at right possition ;
    int pivotindex = s+cnt;
    swap(arr[pivotindex],arr[s]);

// sortin left and rigth part ;
    int i=s, j=e;

    while(i < pivotindex && j > pivotindex){

        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotindex && j > pivotindex){
            swap(arr[i++],arr[j--]);
        }

    }return pivotindex;

}

void quicksort(vector<int> &arr,int s,int e){

    if(s>=e)
    return ;

    int p=partition(arr,s,e);

    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);

}

int main(){

    vector<int> arr={2,4,1,6,9};
    int n=arr.size();

    quicksort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
