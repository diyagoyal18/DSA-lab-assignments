/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
xii. Shift()
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
void Shift(int arr[], int size, int pos){
    for (int  i = size; i >pos; i--)
    {
        arr[i]=arr[i-1];
    } 
}
int main(){
    int index, n,i;
    cout<<"Enter n";
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    cout<<"Enter Position: ";
    cin>>index;
    Shift(arr,n,index);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}