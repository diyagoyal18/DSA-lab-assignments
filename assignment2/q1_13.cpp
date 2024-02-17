/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
xiii. Rotate()
Acknowledgement: NA
*/
#include<iostream>
using namespace std;
void Rotate(int arr[],int size){
	int temp=arr[size-1];
	for(int i=0;i<size;i++){
		arr[size-i-1]=arr[size-i-2];
	}
	arr[0]=temp;
cout<<"rotated array: ";
	for(int j=0;j<size;j++){
cout<<arr[j]<<" ";
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int size=5;
	Rotate(arr,size);
	return 0;
}