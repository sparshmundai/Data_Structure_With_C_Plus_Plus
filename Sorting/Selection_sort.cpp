#include <iostream>
using namespace std;

void selection_sort(int *arr,int n){
    int temp,minindex;

    for(int i=0; i<n-1; i++){
        minindex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
}

void print_array(int *arr,int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<"\t";
        }
}

int main(){
    int arr[]={3,5,2,13,12};
    selection_sort(arr,5);
    print_array(arr,5);
     
    return 0;
}
