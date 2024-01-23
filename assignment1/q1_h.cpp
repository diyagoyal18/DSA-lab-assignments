//viii.	Shifts the contents of array cells one cell to the right, with the last cell's contents moved to the left end.

#include<iostream>
using namespace std;
void shift(int arr[], int size){
    int temp=arr[size-1];
    for( int i = size-1; i>0;--i){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
       int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    shift(arr,n);
    printArray(arr,n);
    return 0;
}