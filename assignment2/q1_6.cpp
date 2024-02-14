/*
Roll Number: 102215255
Name: Diya Goyal
Description: If a one dimensional integer type array with its size and length given, write the code in C++
language to create functions to perform the following operations (Please assume whatever
is necessary to examplify the results) :
vi. BinarySearch(x)
*/
#include<iostream>
using namespace std;


int BinarySearch(int arr[],int size,int target){
	int start=0;
	int end=size-1;
	int mid=start/2+end/2;

	while(start<end){
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			start=mid+1;

		}
		else if(arr[mid]>target){
			end=mid-1;
		}

		mid=start/2+end/2;
	}
	
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=10;
	int target= 10;
	cout<<"the index of the array is :"<<(BinarySearch(arr,size,target));
}