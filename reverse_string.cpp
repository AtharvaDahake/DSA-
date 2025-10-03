#include<iostream>
using namespace std ;
int reverse(char ch[],int n){
    int start=0;
    int end =n-1;
    while(start<end){
        swap(ch[start++],ch[end--]);
    }
}

int getl(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }return count ;
}
int main(){
    char ch[20];
    cout << "enter your name to count the leangt "<< endl;
    cin >> ch ;
    cout << "Your name is "<< ch << endl ;
    int len=getl(ch);
    cout << "leangth "<<len<< endl;
    reverse(ch,len);
    cout <<"your name is ";
    cout<<ch<<endl;
    return 0; 
} 