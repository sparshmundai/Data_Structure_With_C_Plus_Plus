 #include <iostream>
 using namespace std;

 void bubble_sort(int *arr,int n){
        for(int i=0; i<n-1; i++){ //For passes
        cout<<"pass"<<i+1<<endl;
            for(int j=0; j<n-1-i; j++ ){
                    if(arr[j]>arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
            }
             
        }
 }

void print_array(int *arr,int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<"\t";
        }
}

 int main(){
    int arr[]={7,11,9,2,17,4};
    int len=6;

    // print_array(arr,len);
    bubble_sort(arr,len);
    print_array(arr,len);
    
    return 0;

 }