/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
vii. Get(index)
Acknowledgement: NA
*/
#include<iostream>
using namespace std;

void Get(int arr[],int size, int index){
	cout<<arr[index];
}



int main(){

	int arr[]={1,2,3,4,5,6,7};
	int size=7;
	int index=5;

	Get(arr,size,index);
	return 0;
}