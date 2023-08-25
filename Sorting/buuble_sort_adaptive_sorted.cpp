 #include <iostream>
 using namespace std;

void bubble_sort_adaptive(int *arr,int n){
        int temp=0;
        int issssss_sorted=0;
        for(int i=0; i<n-1; i++){ //For passes
            cout<<"pass="<<i+1<<endl;
            issssss_sorted=1;
            for(int j=0; j<n-1-i; j++ ){//For comparisons
                    if(arr[j]>arr[j+1]){
                         temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        issssss_sorted=0;
                    }
            }

            if(issssss_sorted==1){
            return;
             
        }
        
        }
 }

void print_array(int *arr,int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<"\t";
        }
}

 int main(){
    int arr[]={1,2,3,4,5,6};
    int len=6;

    // print_array(arr,len);
    bubble_sort_adaptive(arr,len);
    print_array(arr,len);
    
    return 0;

 }