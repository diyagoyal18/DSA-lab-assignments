/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
ii. Add/Append(x)
*/
#include<iostream>
using namespace std;
void Add(int arr[], int n, int element){
    int arr2[n+1];
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    arr2[n]=element;
    for(int i=0;i<n+1;i++){
        cout<<arr2[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int element= 6;
    Add(arr,size,element);
    return 0;
}