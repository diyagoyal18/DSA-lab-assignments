/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
viii. Set(index,x)
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
void set(int arr[], int index, int s){
    arr[index-1]=s;
}
int main(){
    int index, num, n, i, x;
    cout<<"Enter n"<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"Enter an element: ";
        cin>>arr[i];
    }
    cout<<"Enter Position: ";
    cin>>index;
    cout<<"Enter number: ";
    cin>>num;
    set(arr,index,num);
    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    
    return 0;
}