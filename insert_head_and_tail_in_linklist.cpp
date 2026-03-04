#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;

}

void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;

}

void insertatpossition(node* &head ,int position,int d){
    node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node* nodetoinsert= new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main(){
    // create a new node ;
    node* node1 = new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head point to node ;
    cout<<"insert for head"<<endl;
    node* head = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);

    cout<<"insert for tail"<<endl;
    node* node2 = new node(10);
    node* head2= node2;
    node* tail = node2;
    print(head2);
    insertAtTail(tail,12);
    print(head2);
    insertAtTail(tail,15);
    print(head2);

    cout<<"insert for position"<<endl;
    // node* node2 = new node(10);
    // node* head2= node2;
    // node* tail = node2;
    print(head2);
    insertatpossition(head2,2,13);
    print(head2);
    insertatpossition(head2,3,14);
    print(head2);

    return 0;

}
