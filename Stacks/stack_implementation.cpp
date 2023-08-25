#include <iostream>
using namespace std;

class stack{
        int *arr;
    public:
        int top;
        int size;

        stack(int value){
            size=value;
            top=-1;
            arr=new int[value];
        }

        void push(int element){
            if(size-top>1){
                top++;
                arr[top]=element;
            }
            else{
                cout<<"Stack will overflow"<<endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack Underflow";
            }
        }

        bool empty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }

        int peek(){
            if(top>=0){
                return arr[top];
            }
            else{
                cout<<"Stack underflow";
            }
        }


};



int main(){
    stack obj(5);
     
    obj.push(23);
    obj.push(34);
    obj.push(34);
    obj.push(34);
    obj.push(34);

    obj.pop();

    obj.push(14);

    cout<<obj.peek();

    if(obj.empty()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


    return 0;
}