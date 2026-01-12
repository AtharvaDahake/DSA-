#include<iostream>
#include<string>
using namespace std ;
string replacespace(string &s){
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('$');
        }else{
            temp.push_back(s[i]);
        }
    }return temp;
}
int main(){
    string s;
    cout <<"enter your sentance ";
    getline(cin,s);
    cout<<replacespace(s);
    return 0;
}
