#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    // constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }

    // distructer
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
        delete next;
        this->next=NULL;
        }
        cout<<"memory is free "<<value<<endl; 
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

void insertatpossition(node* &tail,node* &head ,int position,int d){
    
    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
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
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deletenode(int position,node* &head){
    //  deletion start node ;
    if(position == 1){
        node* temp=head;
        head=head->next;
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
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
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
    insertatpossition(tail,head2,2,13);
    print(head2);
    insertatpossition(tail,head2,3,14);
    print(head2);

    deletenode(3,head2);
    print(head2);
    return 0;
 
}
