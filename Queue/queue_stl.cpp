#include <iostream>
#include<queue>
using namespace std;
int main(){
    queue <int> q;

    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);

    cout<<"The size of the queue is "<<q.size()<<endl;

    q.pop();

    cout<<"The front element is "<<q.front()<<endl;

    q.pop();

    cout<<"The size of the queue is "<<q.size()<<endl;

     if(q.empty()){
        cout<<"Queue is empty"<<endl;
     }
     else{
        cout<<"Queue is not empty"<<endl;
     }

    cout<<"The front element is "<<q.front()<<endl;

    return 0;
}