//code to find sum of all even number 
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


//code to find star pattern in 2x2 form 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
}


/*code to find 111 
               222
               333 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<i;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
}