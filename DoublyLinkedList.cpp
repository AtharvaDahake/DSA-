#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*prev;
    node*next;

    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
     
    ~node(){
        int valur=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }cout<<"memory free with data "<<valur<<endl; 
    }
};

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

int getlen(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertathead(node* &tail,node* &head,int d){
    if(head == NULL) {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }else{
    node* temp = new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void insertattail(node* &tail,node* &head,int d){
    if(tail == NULL) {
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }else{
    node* temp = new node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
    }
}

void insertAtPosition(node* & tail, node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertathead(tail,head, d);
        return;
    }

    node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertattail(tail,head,d);
        return ;
    }

    //creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deletenode(int position,node* &head){
    //  deletion start node ;
    if(position == 1){
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }else{
        // deleting middle of last node ;
        node* curr=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }   
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}


int main(){
    node* node1 = new node(10);
    node* head=node1;
    node* tail=node1;
    cout<<"inserting at head"<<endl;
    print(head);
    int len=getlen(head);
    // cout<<len<<endl;
    insertathead(tail,head,11);
    print(head);
    insertathead(tail,head,12);
    print(head);
    insertathead(tail,head,13);
    print(head);
    cout<<"insearting at tail"<<endl;
    insertattail(tail,head,15);
    print(head);
    insertattail(tail,head,17);
    print(head);
    cout<<"insert at any position "<<endl;
    insertAtPosition(tail,head,6,16);
    print(head);
    cout<<"delete at any position "<<endl;
    deletenode(1,head);
    print(head);
    return 0;
}
