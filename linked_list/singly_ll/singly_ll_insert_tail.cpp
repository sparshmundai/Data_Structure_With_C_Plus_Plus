#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int n){
            data=n;
            next=NULL;
        }
};

void print(Node *head){
    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }

}

void insertAtTail(Node *&tail,int element){
    //NEW NODE
    Node *temp=new Node(element);

    //insert at end
    tail->next=temp;
    tail=temp;

}


int main(){
    Node *head=NULL;
    Node *tail=NULL;

    Node *node1;
    node1=new Node(10);
    head=node1;
    tail=node1;


    print(head);

        
     
    return 0;
}

