#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;

        Node(int value){
            data=value;
            prev=NULL;
            next=NULL;
        } 

        ~Node(){
            cout<<"Deletion Done"<<endl;
        }
};

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAthead(Node *&head,int element){
    Node *temp=new Node(element);

    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAttail(Node *&tail,int element){
    Node *temp=new Node(element);

    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtposition(Node *&head,int position,int element){
    if(position==1){
        insertAthead(head,element);
    }
    else{
        Node *temp=head;
        int counter=1;

        while(counter<position-1){
            temp=temp->next;
            counter++;
        }

        Node *new_node=new Node(element);

        new_node->next=temp->next;
        temp->next->prev=new_node;
        temp->next=new_node;
        new_node->prev=temp;
    }
}

void deleteNode(Node *&head,int position){
    if(position==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;
        int counter=1;

        while(counter<position){
            prev=curr;
            curr=curr->next;
            counter++;
        }
        
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}


int main(){
    Node *head=NULL;
    Node *tail=NULL;
    Node *node1=new Node(5);
    head=node1;
    tail=node1;
    print(head);
    
    insertAthead(head,0);
    print(head);

    insertAttail(tail,10);
    print(head);
    
    insertAtposition(head,2,8);
    print(head);

    deleteNode(head,2);
    print(head);

    
    return 0;
}