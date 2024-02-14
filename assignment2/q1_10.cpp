/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
x. Min()
*/
#include<iostream>
using namespace std;


int Min(int arr[],int size){
	int min=arr[0];

	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}

int main(){
	int arr[]={1,2,3,4,5,6,7,4,-1};
	int size=9;
	cout<<"min="<<(Min(arr,size));
	return 0;
}