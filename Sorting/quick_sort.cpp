#include <iostream>
using namespace std;

int partition(int a[],int low,int high){
        
        int pivot=a[low];
        int i=low+1;
        int j=high;
        int temp; 

        do{
            //for i
            while(a[i]<=pivot){
                i++;
            }

            //for j
            while(a[j]>pivot){
                j--;
            }

            //swaping i and j , highest and lowest value
            if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }while(i<j);

        temp=a[low];
        a[low]=a[j];
        a[j]=temp;

        return j;
}

void quick_sort(int a[],int low,int high){
        int partion_index;

        if(low<high){
            partion_index=partition(a,low,high);
            quick_sort(a,low,partion_index-1);
            quick_sort(a,partion_index+1,high);
        }

}

void print_array(int *a,int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}


int main(){
    int a[]={12,3,4,5,2,78,1};
    int n=7;
    print_array(a,n);
    quick_sort(a,0,n);
    print_array(a,n);

    return 0;
}
