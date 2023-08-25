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

void insertAthead(Node * &head,int element){
        Node *temp=new Node(element);

        temp->next=head;
        head=temp;
}


void print(Node *head){
    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }

}


int main(){
    Node *head=NULL;

    Node *node1;
    node1=new Node(10);
    head=node1;

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    insertAthead(head,20);
    insertAthead(head,30);

    print(head);

        
     
    return 0;
}

