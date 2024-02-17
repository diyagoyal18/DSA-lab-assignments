/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
i. Display()
Acknowledgement: NA;
*/


#include<iostream>
using namespace std;
    void display(int arr[], int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
int main(){
    int n;
    int arr[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    display(arr, n);
    return 0;
}      