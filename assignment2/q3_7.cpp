/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given array, write functions to perform the following:
vii. Finding max and min in a single scan
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
void maxANDmin(int arr[],int size){
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];  
        }
    }
    cout<<"min="<<min<<endl<<"max="<<max;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    maxANDmin(arr,size);
    return 0;
}