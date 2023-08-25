#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

    node(int n){
        data=n;
        next=NULL;
    }

};


int main(){
    node *node_obj;
    node_obj=new node(10);

    cout<<node_obj->data<<endl;
    cout<<node_obj->next;
     
    return 0;
}