/*
Roll Number: 102215255
Name: Diya Goyal
Description:For a given array, write functions to perform the following:

i. Check if an array is sorted
ii. Merge arrays
iii. Set operations on array: Union, Intersection
*/
#include<iostream>
#include<algorithm>
using namespace std;


bool sortedarray(int arr[],int size){
	sort(arr,size);
	
	bool result=false;
	for(int i=0;i<size;i++){
		if(arr[i]==brr[i]){
			result=true;

		}
	}

	return result;
}

int main(){
	int arr[]={1,2,3,4,5,6};
	int size=6;
	// if(sortedarray(arr,size)){
	// 	cout<<"sorted array!!";
	// }
	// else{
	// 	cout<<"array is not soreted!!";
	// }
	sort(arr,size);
	return 0;
}