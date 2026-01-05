// array

/*#include<iostream>
#include<array>
using namespace std ;
int main(){
    array<int,5> a={1,2,3,4,5};
    int s=a.size();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<< endl;
    cout<<a.at(3)<<endl;
    cout<<a.empty()<<endl;
    cout<<a.front()<<" "<<a.back();
}*/

// vector

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    cout<<"cap of a is "<<a.capacity()<<endl;

    a.push_back(1);
    cout<<"cap of a is "<<a.capacity()<<endl;
    a.push_back(2);
    cout<<"cap of a is "<<a.capacity()<<endl;
    a.push_back(3);
    cout<<"cap of a is "<<a.capacity()<<endl;
    cout<<"size of a is "<<a.size()<<endl;
    cout<<"before ";
    for(int i:a){
        cout<<i<<" ";
    }
    a.pop_back();
    cout<<"after ";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"before clear";
    cout<<a.size()<<endl;
    a.clear();
    cout<<"after clear size "<<a.size()<<endl;
    vector<int> b(5,1);
    for(int i:b){
        cout<<b[i]<<" ";
    }cout<<endl;
    b.push_back(5);
    for(int i:b){
        cout<<b[i]<<" ";
    }cout<<endl;
    cout<<"first "<<b.front()<<" "<<"second "<<b.back()<<endl;
    vector<int> d(b);
    cout<<"last vector is "<<endl;
    for(int i:d){
        cout<<d[i]<<" ";
    }
}*/

// deque

/*#include<iostream>
#include<deque>
using namespace std ;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    cout<<endl;
    cout<<d.at(1);
    cout<<"first"<<d.front();
    cout<<"last"<<d.back()<<endl;
    cout<<"empty or not "<<d.empty()<<endl;
    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
}*/

// list

/*
#include<iostream>
#include<list>
using namespace std ;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" "; 
    }
    cout<<endl;
    // l.erase(l.begin());
    // cout<<"after erase"<<endl;
    // for(int i:l){
    //     cout<<i<<" ";
    // }cout<<endl;
    cout<<"size of list "<<l.size()<<endl;
    list<int> newe(10,50);
    for(int i:newe){
        cout<<i<<" ";
    }cout<<endl;
}*/

// stack

/*#include<iostream>
#include<stack>
using namespace std ;
int main(){
    stack<string> s;
    s.push("atharva");
    s.push("nitin");
    s.push("dahake");
    cout<< "top element "<<s.top()<<endl;
    s.pop();
    cout<< "top element "<<s.top()<<endl;
    cout<<"size of s is "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty();
}*/

// queue

/*#include<iostream>
#include<queue>
using namespace std ;
int main(){
    queue<string> q;
    q.push("atharva");
    q.push("nitin");
    q.push("dahake");
    cout<<"first element "<<q.front()<<endl;
    cout<<"first element "<<q.back()<<endl;
    cout<<"first element "<<q.front()<<endl;
    cout<<"size before pop"<<q.size()<<endl;
    q.pop();
    cout<<"first element "<<q.front()<<endl;
    cout<<"size after pop"<<q.size()<<endl;
}*/

// priority queue

/*#include<iostream>
#include<queue>
using namespace std ;
int main(){
    priority_queue<int> maxi;

    priority_queue<int,vector<int> ,greater<int> > mini;
    maxi.push(3);
    maxi.push(2);
    maxi.push(4);
    maxi.push(1);
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(3);
    mini.push(2);
    mini.push(4);
    mini.push(1);
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl; 
}*/

// set

/*#include <iostream>
#include <set>
using namespace std;

int main() {
    // 1. Setup: Creating and filling the set for the example
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6); 
    // Set is now: {1, 2, 3, 4, 5, 6} (Sorted automatically)

    // --- CODE FROM IMAGE STARTS HERE ---

    // 2. Setting an iterator to the beginning
    set<int>::iterator it = s.begin();
    it++; // Move iterator to the 2nd element (which is '2')

    // 3. Erasing the element at the iterator position
    s.erase(it); // Removes '2'

    // 4. Printing the set after deletion
    for(auto i : s) {
        cout << i << endl;
    }
    cout << endl;

    // 5. Checking if -5 is present
    cout << "-5 is present or not -> " << s.count(-5) << endl;

    // 6. Finding element '5' and creating an iterator there
    set<int>::iterator itr = s.find(5);

    // 7. Printing from '5' to the end
    for(auto it = itr; it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}*/

// map

/*#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int, string> m;

    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";

    m.insert({5, "bheem"});

    cout << "before erase" << endl;
    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    cout << "finding -13 -> " << m.count(-13) << endl;
    
    cout << "after erase" << endl;
    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    auto it = m.find(5);
    for(auto i = it; i != m.end(); i++) {
        cout << (*i).first << " " << (*i).second << endl;
    }
}*/
