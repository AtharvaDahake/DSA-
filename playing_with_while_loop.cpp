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


/*write a code to find 123
                       123 
                       123 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout<<j;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
}


/*code 123
       456
       789*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int count =1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            //to add the next number we add the count and merge it in the code     
            cout<<count<<" ";
            count=count + 1;
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
}


/* code for this pattern 
*
**
***
****
*****

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
}



/*code for 1
           2 3 
           4 5 6*/
#include<iostream>
using namespace std ;
int main (){
    int n;
    cout << "enter the number :";
    cin>>n;
    int count=0;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            count=count+1;
            cout<<count<<" ";
            j=j+1;

        }cout<<endl;
        i=i+1;
    }
}


/*code for 1
           2 3 
           3 4 5
           4 5 6 7*/
#include<iostream>
using namespace std ;
int main (){
    int n;
    cout << "enter the number :";
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            
            cout<<i+j-1;
            j=j+1;

        }cout<<endl;
        i=i+1;
    }
}


/*code for 1
           2 1 
           3 2 1*/
#include<iostream>
using namespace std ;
int main (){
    int n;
    cout << "enter the number :";
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            
            cout<<i-j+1;
            j=j+1;

        }cout<<endl;
        i=i+1;
    }
}


/*AAAAA
BBBBB
CCCCC
DDDDD
EEEEE*/
#include<iostream>
using namespace std ;
int main (){
    int n;
    cout << "enter the number :";
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+i-1;
            cout<<ch ;
            j=j+1;

        }cout<<endl;
        i=i+1;
    }return 0;
}


// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE

#include<iostream>
using namespace std ;
int main (){
    int n;
    cout << "enter the number :";
    cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+j-1;
            cout<<ch ;
            j=j+1;

        }cout<<endl;
        i=i+1;
    }return 0;
}



/*ABC
DEF
GHI*/
#include<iostream>
using namespace std ;
int main (){
    int n;
    cout << "enter the number :";
    cin>>n;
    char ch = 'A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch ;
            ch = ch + 1;
            j=j+1;

        }cout<<endl;
        i=i+1;
    }return 0;
}


/*ABC
BCD
CDE*/
#include<iostream>
using namespace std ;
int main (){
    int n;
    cout << "enter the number :";
    cin>>n;
    char ch = 'A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            ch='A'+i+j-2;
            cout<<ch ;
            j=j+1;

        }cout<<endl;
        i=i+1;
    }return 0;
}
