/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given array, write functions to perform the following:

vi. Finding a pair of elements with sum k in sorted array

*/
#include<iostream>
using namespace std;


void twosum(int arr[],int size, int k){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]+arr[j]==k){
				cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
			}
		}


	}

}

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=10;
	int k=5;
	twosum(arr,size,k);
	return 0;
}