#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter a number ";
    cin >> n;
    int a=0;
    int sum =0;
    while(a<=n){
        cout<<a<<" "<<endl;
        sum = sum + a;
        a=a+2;
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}