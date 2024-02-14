/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
xi. Reverse()
*/
#include<iostream>
using namespace std;

void Reverse(int arr[],int size){
	int brr[size];
	for(int i=0;i<size;i++){
		brr[i]=arr[size-i-1];
	}
cout<<"reverse array: ";
	for(int j=0;j<size;j++){
		cout<<brr[j]<<" ";
	}
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=10;
	Reverse(arr,size);
	return 0;
}