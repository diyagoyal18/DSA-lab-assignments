//vii.	Finds the index of the largest number in an array.


#include<iostream>
using namespace std;
int largest(int arr[], int size){
    int max=arr[0];
    int i;
    int pos;
    for( i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
            pos=i;
        }
        
    }
    cout<<pos;
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
    largest(arr, n);
    return 0;
}