/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given array, write functions to perform the following:
iv. Finding duplicates in an unsorted array
Acknowlwdgement: NA
*/
#include<iostream>
using namespace std;
void duplicateelements(int arr[],int size){ 
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        } 
    }   
}
int main(){
    int arr[]={1,2,3,2,5,7,5,8,9,1};
    int size=10;
    duplicateelements(arr,size);
    return 0;
}