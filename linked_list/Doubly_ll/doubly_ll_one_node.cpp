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

int main(){
    Node *node1=new Node(10);
    cout<<node1->data<<endl;

     
    return 0;
}