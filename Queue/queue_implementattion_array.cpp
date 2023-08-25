#include <iostream>
using namespace std;

class queue{
    public:
        int *arr;
        int size;
        int frontt;
        int rear;

        queue(int value){
            size=value;
            arr=new int[size];
            rear=0;
            frontt=0;
        }

        void enqueue(int element){
            if(rear==size){
                cout<<"Queue is full";
            }
            else{
                arr[rear]=element;
                rear++;
            }
        }

        void dequeue(){
            if(rear==frontt){
                cout<<"Queue is empty"<<endl;
            }
            else{
                arr[frontt]=-1;
                frontt++;
            }

            if(frontt==rear){
                frontt=0;
                rear=0;
            }
        }

        bool empty(){
            if(rear==frontt){
                return true;
            }
            else{
                return false;
            }
        }

        int front(){
            if(rear==frontt){
                cout<<"Queue is empty"<<endl;
            }
            else{
                int temp=arr[frontt];
                return temp;
            }
        }


};

int main(){
    queue q(34);
    q.enqueue(12);
    q.enqueue(32);
    q.enqueue(42);
    q.enqueue(62);

    cout<<"The front element is "<<q.front();

    q.dequeue();

    if(q.empty()){
        cout<<"Queue is empty";
    }
    else{
        cout<<"Queue is not empty";
    }

     
    return 0;
}