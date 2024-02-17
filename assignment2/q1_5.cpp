/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
v. LinearSearch(s)
Acknowledgement: NA
*/
#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return i;
			break;
		}
	}

	return -1;
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=10;
	int key= 10;
	cout<<"the index of the array is :"<<(linearsearch(arr,size,key));
}