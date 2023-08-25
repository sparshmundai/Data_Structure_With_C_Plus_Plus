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
        }
};

//Print ll through traversing
void print(Node *head){
    Node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//length of ll through traversing
int len(Node *head){
    Node *temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAThead(Node *&head,int element){
    //new node
    Node *temp=new Node(element);

    //linking
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAttail(Node *&tail,int element){
    //New Node
    Node *temp=new Node(element);

    //linking
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtposition(Node *&head,int position,int element){
    if(position==1){
        insertAThead(head,element);
        return;
    }
    else{
        Node *temp=head;
        int count=1;

        while(count<position-1){
            temp=temp->next;
            count++;
        }

        Node *new_node=new Node(element);

        new_node->next=temp->next;
        temp->next->prev=new_node;
        temp->next=new_node;
        new_node->prev=temp;

    }
}

int main(){
    Node *head=NULL;
    Node *tail=NULL;
    Node *node1=new Node(10);
    head=node1;
    tail=node1;


    print(head);
    insertAThead(head,12);
    print(head);
    insertAttail(tail,20);
    
    print(head);

    insertAtposition(head,2,11);
    print(head);




    return 0;
}