#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int value){
            data=value;
            next=NULL;
        }


        ~Node(){
            // if(this->next != NULL){
            //     delete next;
            //     next=NULL;
            // }
        }

};

void print(Node *obj){
    Node* temp=obj;

    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;    
}

void insert_at_head(Node *&head,int element){
    // Creating New Node
    Node *temp=new Node(element);

    temp->next=head;
    head=temp;
}

void insert_at_tail(Node *&tail,int element){
    //Creating a new node
    Node *temp=new Node(element);

    tail->next=temp;
    tail=temp;
}

void insert_at_position(Node *&head, int position,int element){
    Node *temp=head;
    int counter=1;

    while(counter<position-1){
        temp=temp->next;
        counter++;
    }

    Node *new_node=new Node(element);
    new_node->next=temp->next;
    temp->next=new_node; 
}

void deletee(Node *&head,int position){

    if(position==1){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node *curr=head;
        Node *prev=NULL;
        int count=1;

        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}


int main(){
    Node *head=NULL;
    Node *tail=NULL;
    Node *node1;
    node1=new Node(1);
    head=node1;
    tail=node1;

    print(head);
    insert_at_tail(tail,2);
    print(head);
    insert_at_tail(tail,4);
    print(head);
    insert_at_tail(tail,5);
    print(head);
    insert_at_tail(tail,6);
    print(head);

    insert_at_position(head,3,3);
    print(head);

    deletee(head,2); 
    print(head);
    


    return 0; 
}