/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given array, write functions to perform the following:

v. Finding a pair of elements with sum k

*/
#include<iostream>
using namespace std;

void pair_sum(int arr[],int size,int k){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]+arr[j]==k){
				cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
			}
		}
	}
}

int main(){
	int arr[]={1,5,7,-1,5};
	int size=5;
	int k=6;
	pair_sum(arr,size,k);
	return 0;
}