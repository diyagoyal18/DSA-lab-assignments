/*
Roll Number: 102215255
Name: Diya Goyal
Description: For a given array, write functions to perform the following:

i. Finding single element in an array
*/
#include<iostream>
using namespace std;

int single_element(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	return ans;
}

int main(){
	int arr[]={1,1,2,3,2,3,5,5,9,6,7,7,6};
	int size=13;
	cout<<"single element= "<<single_element(arr,size);
	return 0;
}