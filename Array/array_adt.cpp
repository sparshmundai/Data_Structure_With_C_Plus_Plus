#include <iostream>
using namespace std;

class array{
    public:
        int size;
        int used_size;
        int *a;

        void append(array *ar,int element){
            if( (*ar).used_size < ar->size ){
                ar->a[ar->used_size]=element;
                ar->used_size++;
            }
        }

        void display(array ar){
            for(int i=0; i<ar.used_size; i++){
                cout<<"Your element "<<i+1<<" is "<<ar.a[i]<<endl;
            }
        }

        void insert(array *arr, int index,int element){

            if(index>=0 && index< (*arr).used_size){
                for(int i=arr->used_size; i<index; i-- ){
                        (*arr).a[i]=arr->a[i-1];
                }
                arr->a[index]=element;
                arr->used_size++;
            }

        }

        int deletee(array *ar,int index){
            int temp=ar->a[index];
            if(index>=0 && index<ar->used_size){
                for(int i=index; i<ar->used_size; i++){
                    ar->a[i]=ar->a[i+1];
                }
            }
            ar->used_size--;
            return temp;
            // return temp;
        }

};

int main(){
    array arr;

    cout<<"Enter the array length:";
    cin>>arr.size;
    arr.a=new int[arr.size];

    cout<<"Enter the length you want to use in the array:";
    cin>>arr.used_size;

    for(int i=0; i<arr.used_size; i++){
        cout<<"Enter the element "<<i+1<<":";
        cin>>arr.a[i];
    }

    arr.display(arr);

    arr.deletee(&arr,1);
    
    arr.display(arr);

    return 0;
}