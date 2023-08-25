#include<stack>
#include <iostream>
using namespace std;

int main(){
    stack <int> obj;

    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);

    obj.pop();

    cout<<obj.size()<<endl;

    cout<<obj.empty()<<endl;

    cout<<obj.top();

    
     
    return 0;
}