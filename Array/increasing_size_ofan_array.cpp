#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"How many students are there:";
    cin>>size;
    
    int *ptr;
    ptr=new int[size];

    for(int i=0; i<size; i++){
        cout<<"Enter the student id of "<<i+1<<":";
        cin>>ptr[i];
    }

    cout<<"How many students are there nowwwwwww:";
    cin>>size;
    
    int *ptr_new=new int[size];

    for(int i=0; i<size; i++){
        cout<<"Enter the student id of "<<i+1<<":";
        cin>>ptr_new[i];
    }

    delete [] ptr;

    ptr=ptr_new;

    ptr_new=NULL;
     
    return 0;
}